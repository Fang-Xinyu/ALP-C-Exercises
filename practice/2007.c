#include <stdio.h>

int main()
{
	int n,i;
	int lis[4];
	scanf("%d",&n);
	for (i=3;i>=0;i--){
		lis[i]=(n%10+5)%10;
		n=n/10;
	}
	printf("%d%d%d%d\n",lis[3],lis[2],lis[1],lis[0]);
	
	
	
	
	return 0;
}
