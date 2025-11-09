#include <stdio.h>

int main()
{
	int L,m;
	scanf("%d %d",&L,&m);
	int lis[10005]={0},p[10005]={0};
	int i;

	for (i=0;i<m;i++){
		int l,r;
		scanf("%d %d",&l,&r);
		p[l]-=1;
		p[r+1]+=1; 
	}

	if (p[0]>=0){
		lis[0]=1;
	}
	int sum=lis[0];	
	for (i=1;i<=L;i++){
		p[i]+=p[i-1];
		if(p[i]>=0){
			sum+=1;
		}
	}
	
	printf("%d",sum);
	
	return 0;
}
