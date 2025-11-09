#include <stdio.h>
int lis[35]={0};

int main()
{
	int n;
	while(scanf("%d",&n)!=EOF){
		if(n==0){
			break;
		}
		int i,j;
		for(i=0;i<n;i++){
			lis[i]=1;
			for(j=i-1;j>0;j--){
				lis[j]=lis[j]+lis[j-1];
			}			
			
			for(j=0;j<i;j++){
				printf("%d ",lis[j]);
			}
			printf("%d\n",lis[i]);			
		}
		printf("\n");
	}
	
	return 0;
}
