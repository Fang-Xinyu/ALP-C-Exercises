#include <stdio.h>

int main()
{
	int n,s,m;
	int i,j;
	scanf("%d %d %d",&n,&s,&m);
	int lis[10001][2];
	for (i=0;i<n;i++){
		lis[i][0]=i;
		lis[i][1]=i+1;
	}
	lis[n][1]=1;
	
	int st=s;
	int p;
	for (i=0;i<n-1;i++){		
		for(j=0;j<m-1;j++){
			p=st;
			st=lis[st][1];
		}
		
		lis[p][1]=lis[st][1];	
		st=lis[st][1];
	}
	printf("%d\n",st);

	return 0;
}
