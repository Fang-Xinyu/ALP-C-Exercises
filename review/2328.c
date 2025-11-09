#include <stdio.h>
#include <stdlib.h> 

// 定义日期结构体
typedef struct {
    int year;
    int month;
    int day;
} TDate;

// 定义时间结构体
typedef struct {
    int hour;
    int minute;
    int second;
} TTime;

// 定义完整的日期时间结构体
typedef struct {
    TDate date;
    TTime time;
} DateTime;

// 判断是否为闰年
int isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// 获取某月的天数
int getDaysInMonth(int year, int month) {
    int days[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (month == 2 && isLeapYear(year)) {
        return 29;
    }
    return days[month];
}

// 将日期时间转换为总秒数（以1900年1月1日为基准）
long long dateTimeToSeconds(DateTime dt) {
    long long totalSeconds = 0;
    
    int year; // 将int变量移到循环外面
    for (year = 1900; year < dt.date.year; year++) { // 使用外部声明的year
        if (isLeapYear(year)) {
            totalSeconds += 366 * 24 * 3600;
        } else {
            totalSeconds += 365 * 24 * 3600;
        }
    }
    
    int month; // 将int变量移到循环外面
    for (month = 1; month < dt.date.month; month++) { // 使用外部声明的month
        totalSeconds += getDaysInMonth(dt.date.year, month) * 24 * 3600;
    }
    
    // 计算天数的秒数（减1因为当天不算完整天）
    totalSeconds += (dt.date.day - 1) * 24 * 3600;
    
    // 计算时分秒
    totalSeconds += dt.time.hour * 3600 + dt.time.minute * 60 + dt.time.second;
    
    return totalSeconds;
}

// 将秒数转换回日期时间差
DateTime secondsToDateTime(long long seconds) {
    DateTime result = {{0, 0, 0}, {0, 0, 0}};
    
    // 计算秒、分、时
    result.time.second = seconds % 60;
    seconds /= 60;
    result.time.minute = seconds % 60;
    seconds /= 60;
    result.time.hour = seconds % 24;
    seconds /= 24;
    
    // 计算年份
    long long days = seconds;
    int year = 0;
    while (days > 0) {
        int daysInYear = isLeapYear(year) ? 366 : 365;
        if (days >= daysInYear) {
            days -= daysInYear;
            year++;
        } else {
            break;
        }
    }
    result.date.year = year;
    
    // 计算月份
    int month; // 这里已经有一个month变量，不需要重复声明
    month = 1;
    while (days > 0 && month <= 12) {
        int daysInMonth = getDaysInMonth(year, month);
        if (days >= daysInMonth) {
            days -= daysInMonth;
            month++;
        } else {
            break;
        }
    }
    result.date.month = month - 1;
    result.date.day = days;
    
    return result;
}

// 比较两个日期时间的大小
int compareDateTime(DateTime dt1, DateTime dt2) {
    if (dt1.date.year != dt2.date.year) {
        return dt1.date.year - dt2.date.year;
    }
    if (dt1.date.month != dt2.date.month) {
        return dt1.date.month - dt2.date.month;
    }
    if (dt1.date.day != dt2.date.day) {
        return dt1.date.day - dt2.date.day;
    }
    if (dt1.time.hour != dt2.time.hour) {
        return dt1.time.hour - dt2.time.hour;
    }
    if (dt1.time.minute != dt2.time.minute) {
        return dt1.time.minute - dt2.time.minute;
    }
    return dt1.time.second - dt2.time.second;
}

int main() {
    DateTime dt1, dt2, diff;
    int isNegative = 0;
    
    // 读取两个时间点
    scanf("%d/%d/%d %d:%d:%d %d/%d/%d %d:%d:%d",
          &dt1.date.year, &dt1.date.month, &dt1.date.day,
          &dt1.time.hour, &dt1.time.minute, &dt1.time.second,
          &dt2.date.year, &dt2.date.month, &dt2.date.day,
          &dt2.time.hour, &dt2.time.minute, &dt2.time.second);
    
    // 判断两个时间的大小关系
    if (compareDateTime(dt1, dt2) > 0) {
        // dt1 > dt2，交换并标记为负数
        DateTime temp = dt1;
        dt1 = dt2;
        dt2 = temp;
        isNegative = 1;
    }
    
    long long seconds1 = dateTimeToSeconds(dt1);
    long long seconds2 = dateTimeToSeconds(dt2);
    long long diffSeconds = seconds2 - seconds1;
    
    diff = secondsToDateTime(diffSeconds);
    
    if (isNegative==0) {
        printf("-");
    }
    printf("%04d/%02d/%02d %02d:%02d:%02d\n",
           diff.date.year, diff.date.month, diff.date.day,
           diff.time.hour, diff.time.minute, diff.time.second);
    
    return 0;
}
