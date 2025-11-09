#include <stdio.h>

int main()
{
	int map[10005],p[10005]={0};
	int L,m;
	scanf("%d %d",&L,&m);
		
	int i;
	for (i=0;i<m;i++){
		int l,r;
		scanf("%d %d",&l,&r);
		
		p[l]-=1;
		p[r+1]+=1;
	}
	
	map[0]=1+p[0]; 
	int sum=map[0];
	for (i=1;i<L+1;i++){
		map[i]=map[i-1]+p[i];	
		if (map[i]>0){
			sum	+=map[i];
		}
		
	}

	printf("%d\n",sum);
	
	return 0;
}
