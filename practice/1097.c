#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	char a[10][10];
	int i,j,k;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&k);
			a[i][j]=k;
		}
	}
	
	for(j=0;j<n;j++){
		for(i=0;i<n-1;i++){
			printf("%d ",a[i][j]);
		}
		printf("%d\n",a[n-1][j]);
	}	
	return 0;
}
