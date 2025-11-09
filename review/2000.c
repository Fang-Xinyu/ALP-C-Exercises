#include <stdio.h>

struct date {
	int year;
	int month;
	int day;
}; 

int days(struct date today)
{
	int sum=0;
	int lis[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int i;
	for(i=1;i<today.month ;i++){
		sum+=lis[i];
	}
	sum+=today.day ;
	if(today.year%4==0&&today.year%100!=0 || today.year%400==0){
		if(today.month >=3){
			sum++;
		}
	}
	return sum;
}

int main()
{
	struct date today;
	scanf("%d.%d.%d",&today.year, &today.month, &today.day );
	int sum=days(today);
	
	printf("%d\n",sum);
	return 0;
}
