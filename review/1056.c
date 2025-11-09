#include <stdio.h>

int main()
{
	double n;	
	char name[35];
	while(scanf("%lf",&n)!=EOF){
		double max,min,sum;
		max=n;
		min=n;
		sum=n;
		int i;
		for(i=1;i<7;i++){
			scanf("%lf",&n);
			sum+=n;
			if(n<min){
				min=n;
			}else if(n>max){
				max=n;
			}
		}
		scanf("%s",name);
		sum=sum-max-min;
		double pj=sum*1.0/5;
		printf("%s %.2f\n",name,pj); 
	}	
	return 0;
}
