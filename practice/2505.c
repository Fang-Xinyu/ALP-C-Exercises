#include <stdio.h>
int main()

{
	int n;
	while (scanf("%d",&n)!=EOF){
		double a[50];
		double max,min;
		scanf("%lf",&a[0]);
		max=a[0];
		min=a[0];
		
		int i;
		for (i=1;i<n;i++){
			scanf("%lf",&a[i]);
			if(a[i]<min){
				min=a[i];
			}else if(a[i]>max){
				max=a[i];
			}
		}
		
		for (i=0;i<n-1;i++){
			printf("%.3f ",(a[i]-min)/(max-min));
		}
		
		printf("%.3f\n",(a[n-1]-min)/(max-min));
	}
	
	
	return 0;
}
