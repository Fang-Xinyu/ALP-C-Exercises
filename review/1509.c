#include <stdio.h>

void f(double a,double b,double c)
{
	double max=a;
	max=b>a?b:a;
	max=c>max?c:max;
	printf("%.3f\n",max);
}

#define max(a,b,c) double m=a>b?a:b;m=c>m?c:m;printf("%.3f\n",m)

int  main()
{
	double a,b,c;
	scanf("%lf %lf %lf",&a,&b,&c);
	f(a,b,c);
	max(a,b,c);
	
	
	return 0;
}
