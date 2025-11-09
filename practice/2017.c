#include <stdio.h>
#include <string.h>

int is_pr(int *p,int n)
{
	int i;
	for(i=0;i<n;i++){
		if(p[i]+1!=p[i+1]){
			return 0;
		}
	}
	return 1;
	
}

void ws(int *p,int n)
{
	int lis2[2*n];
	int i;
	for(i=0;i<n;i++){
		lis2[2*i]=p[i+n];
		lis2[2*i+1]=p[i];
	}
	memcpy(p,lis2,2*n*sizeof(int));
}

int main(void)
{
	int n;
	scanf("%d",&n);
	int i;
	int lis[2*n];
	for(i=0;i<2*n;i++){
		lis[i]=i+1;	
	}
	int count=0;
	do{
		count++;
		ws(lis,n);
		
	}while(is_pr(lis,n)==0);
	printf("经%d次洗牌回到初始状态\n",count);
	
	
	return 0;
}
