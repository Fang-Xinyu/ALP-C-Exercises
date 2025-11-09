#include <stdio.h>

int main()
{
	double x;
	double y=0;
	scanf("%lf",&x);
	if(x<=1){
		y=x+5;
	}else if(x<=10){
		y=2*x;
	} else{
		y=3.0/(x-10);
	}
	printf("%.3f",y);
	
	return 0;
}
