#include <stdio.h>

double yu(double a,int b,double c,double x)
{
	double sum=a;
	int i;
	for (i=0;i<b;i++){
		sum=sum*(1.0+x)-c;
	}
	return sum;
}

int main()
{
	double a,c;
	int b;
	scanf("%lf %d %lf",&a,&b,&c);
	
	double i=0.0,j=1.0;
	double m=(i+j)/2.0;
	double sum=yu(a,b,c,m);
	while( fabs(sum)>1e-8){
		if (sum>0){
			j=m;
		}else{
			i=m;
		}
		m=(i+j)/2.0;
		sum=yu(a,b,c,m);
	}
	m=m*100;
	printf("%.3f%%",m);
	return 0;
}
