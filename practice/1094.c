#include <stdio.h>
#include <math.h>

int main()
{
	double a,b,c,x1,x2;
	scanf("%lf %lf %lf",&a,&b,&c);
	x1 = (-b+sqrt(-4*a*c+b*b))/2/a;
	x2 = (-b-sqrt(-4*a*c+b*b))/2/a;
	
	printf("%.2f %.2f\n",x1,x2);
	
	return 0;
}
