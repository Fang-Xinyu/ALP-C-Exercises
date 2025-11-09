#include <stdio.h>

int main()
{
	int a,b,c;
	while (scanf("%d %d %d",&a,&b,&c) != EOF){
		int h,j;
		double p;
		h = a+b+c;
		j = a*b*c;
		p = h/3.0;
		printf("%d %d %.2f\n",h,j,p);
	}
	
	return 0;
}
