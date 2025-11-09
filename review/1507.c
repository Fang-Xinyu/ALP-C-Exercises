#include <stdio.h>

#define LEAP_YEAR(y) char p=(y%4==0&&y%100!=0||y%400==0)?'L':'N';printf("%c",p)

int main()
{
	int year;
	scanf("%d",&year);
	
	LEAP_YEAR(year);
	
	return 0;
}
