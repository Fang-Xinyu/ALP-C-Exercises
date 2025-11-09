#include <stdio.h>

int main()
{
	int i;
	float sum=0;
	int max=0,min=11;
	for (i=0;i<10;i++){
		int a;

		scanf("%d",&a);
		if(max<a){
			max=a;
		}
		if(min>a){
			min=a;
		}
			
		sum+=a;	
	}
	sum=sum-max-min;
	printf("%.3f",sum/8.0);

	return 0;
}
