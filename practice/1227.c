#include <stdio.h>
#include <math.h>

int main()
{
	int T,i;
	scanf("%d",&T);
	for (i=0;i<T;i++){
		int h,m,s;
		scanf("%d %d %d",&h,&m,&s);
		
		double th1,th2;
		th1=h%12*30+m/60.0*30+s/60.0*0.5;
		th2=m*6+s*0.1;
		
		double theta=th1-th2;
		
		if (theta<0){
			theta=-theta;
		}
		if(theta>180){
			theta=360-theta;
		}
		theta=floor(theta);
		
		printf("%.0f\n",theta);
	}
	
	return 0;
}
