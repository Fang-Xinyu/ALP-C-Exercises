#include <stdio.h>
int m,n;
int f[1005];
int g[1005];	

int find(int i,int p)
{
	while(p<n && f[i]>g[p]){
		p++;
	}
	return p;
}

int main()
{
	scanf("%d %d",&m,&n);
	int i;
	for(i=0;i<m;i++){
		scanf("%d",&f[i]);
	}
	for(i=0;i<n;i++){
		scanf("%d",&g[i]);
	}
	int sum=0;
	int lis[1005]={0};
	int p=0;
	for(i=0;i<m;i++){
		lis[i]=find(i,p);
		p=find(i,p);
		sum+=lis[i];
	}
	printf("%d",sum);
	return 0;
}
