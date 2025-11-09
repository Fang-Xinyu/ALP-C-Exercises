#include <stdio.h>

int main()
{
	int m;
	int lis[45]={-1,-1,1,2};
	while(scanf("%d",&m)!=EOF){
		int i;
		for (i=4;i<m+1;i++){
			lis[i]=lis[i-1]+lis[i-2];
		}
		printf("%d\n",lis[m]);	
	}

	return 0;
}
