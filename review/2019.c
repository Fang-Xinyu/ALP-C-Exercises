#include <stdio.h>
int lis[1000];
void is_su(int n,int m)
{
	int dic[1000]={-1,1,0};
	int i,j;
	for(i=2;i<=m;i++){
		if(dic[i]==0){
			for(j=i*i;j<=m;j+=i){
				dic[j]=1;
			}
		}
	}
	int p=0;	
	for(i=n;i<=m;i++){
		if(dic[i]==0){
			lis[p]=i;
			p++;
		}
	}
}

int main()
{
	int c,d;
	scanf("%d %d",&c,&d);
	int i;
	is_su(c,d);
	
	printf("%d",lis[0]);
	return 0;
}
