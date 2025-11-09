#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	double sum;
	double a[11]={1,2,3,5,8,13,21,34,55,89,144};
	int i;
	for (i=0;i<n;i++){
		sum+=a[i+1]/a[i];
	}
	
	printf("%.6f",sum);
	
	return 0;
}
