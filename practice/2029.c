#include <stdio.h>

int main()
{
	int m,n;
	int sum=0;
	int i;
	scanf("%d %d",&n,&m);
	for (i=n;i<=m;i++){
		sum+=i;
	}
	printf("The sum from %d to %d is %d.",n,m,sum);
	
	return 0;
 } 
