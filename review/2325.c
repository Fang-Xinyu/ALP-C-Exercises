#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void reverse(char *s) {
    int len = strlen(s);
    int i;
    for (i = 0; i < len / 2; i++) {
        char t = s[i];
        s[i] = s[len - i - 1];
        s[len - i - 1] = t;
    }
}

// 去除多余的前导零和末尾小数点后的0
void trim(char *s) {
    int len = strlen(s);
    while (len > 0 && s[len - 1] == '0') {
        s[len - 1] = '\0';
        len--;
    }

    if (len > 0 && s[len - 1] == '.') {
        s[len - 1] = '\0';
    }
}

// 对齐小数点（确保小数点后位数相等）
void align_decimal(char *a, char *b) {
    if (!strchr(a, '.')) strcat(a, ".");
    if (!strchr(b, '.')) strcat(b, ".");

    // 重新定位小数点
    char *pa = strchr(a, '.');
    char *pb = strchr(b, '.');

    int la = strlen(pa + 1);
    int lb = strlen(pb + 1);

    // 补小数位
    int i;
    for (i = la; i < lb; i++) strcat(a, "0");
    for (i = lb; i < la; i++) strcat(b, "0");

    // 补整数位
    int inta = pa - a;
    int intb = pb - b;

    if (inta > intb) {
        memmove(b + inta - intb, b, strlen(b) + 1);
        for (i = 0; i < inta - intb; i++) b[i] = '0';
    } else if (intb > inta) {
        memmove(a + intb - inta, a, strlen(a) + 1);
        for (i = 0; i < intb - inta; i++) a[i] = '0';
    }
}


// 加法主函数
void add(char *a, char *b, char *res) {
    char s1[1000], s2[1000];
    strcpy(s1, a);
    strcpy(s2, b);

    align_decimal(s1, s2);

    int len = strlen(s1);
    char r[1000] = {0};
    int carry = 0;
    int ri = 0;
	int i;
    for (i = len - 1; i >= 0; i--) {
        if (s1[i] == '.') {
            r[ri++] = '.';
            continue;
        }
        int sum = (s1[i] - '0') + (s2[i] - '0') + carry;
        r[ri++] = sum % 10 + '0';
        carry = sum / 10;
    }
    if (carry) r[ri++] = carry + '0';

    r[ri] = '\0';
    reverse(r);
    strcpy(res, r);
    trim(res);
}

int main() {
    char a[500], b[500];
    while (scanf("%s %s", a, b) != EOF) {
        char result[1000] = {0};
        add(a, b, result);
        printf("%s\n", result);
    }
    return 0;
}

