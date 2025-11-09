#include <stdio.h>
int p;

Prime(int n, int m, int *num)
{
	int i,j;
	int dic[1005]={-1,1,0}; //shi 0
	for(i=2;i<=m;i++){
		if(dic[i]==0){
			for(j=i*i;j<=m;j+=i){
				dic[j]=1;
			}
		}
	}
	p=0;
	for(i=n;i<=m;i++){
		if(dic[i]==0){
			num[p]=i;
			p++;
		} 
	}
}

int main()
{
	int n,m;
	scanf("%d",&n);
	scanf("%d",&m);
	
	int num[1000];
	Prime(n,m,num); 
	
	int i;
	for(i=0;i<p;i++){
		printf("%d\n",num[i]);
	}
	
	return 0;
}
