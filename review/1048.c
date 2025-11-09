#include <stdio.h>    ////类似字典 

int find(int a, int p, long long lis[][2])
{
	int i;
	for(i=0;i<p;i++){
		if(a==lis[i][0]){
			return i;
		}
	}
	return -1;	
}

int main()
{
	int t;
	scanf("%d",&t);
	
	int i,j;
	int n;
	for(i=0;i<t;i++){
		scanf("%d",&n);
		int p=0;
		long long lis[10005][2]={0};
		for(j=0;j<n;j++){
			int a;
			scanf("%d",&a);
			int sq=find(a, p, lis);
			if( sq!=-1 ){
				lis[sq][1]++;
			}else{
				lis[p][0]=a;
				lis[p][1]=1;
				p++;
			}
		}
		int max=lis[0][1];
		for(j=0;j<p;j++){      /////////不要用到 i 
			if(lis[j][1]>max){
				max=lis[j][1];
			}
		}
		printf("%d\n",max);
	}		
	return 0;
}
