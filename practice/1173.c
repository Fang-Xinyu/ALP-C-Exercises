#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	int i;
	int a[10];
	for (i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	int min=a[0],max=a[0];
	int ix=0,ax=0;
	for (i=0;i<n;i++){
		if(a[i]>max){
			max=a[i];
			ax=i;
		}else if (a[i]<min){
			min=a[i];
			ix=i;
		}
	}
	
	if (ax==0 && ix==n-1){
		a[0]=min;
		a[n-1]=max;
	}else if(ax==0){
		a[ix]=a[0];
		a[0]=min;
		a[ix]=a[n-1];
		a[n-1]=max;
	}else{
		a[ix]=a[0];
		a[0]=min;
		a[ax]=a[n-1];
		a[n-1]=max;
		
	}	
		
	for (i=0;i<n-1;i++){
		printf("%d ",a[i]);
	}
	printf("%d",a[n-1]);
	
	return 0;
 } 
