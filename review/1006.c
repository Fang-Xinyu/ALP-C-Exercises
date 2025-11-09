#include <stdio.h>
#include <string.h>

int f(int n)
{
	if(n==1){
		return 0;
	}
	
	unsigned char *lis=(char *)malloc(sizeof(char)*(n+1));
	int i;
	memset(lis,1,n+1);
	int j;
	lis[0]=lis[1]=0;
	for(i=2;i*i<=n;i++){
		if(lis[i]==1){
			for(j=i*i;j<=n;j+=i){
				lis[j]=0;
			}
		}
	}	
	int count=0;
	for(i=1;i<=n;i++){
		if(lis[i]==1){
			count++;
		}
	}
	free(lis);
	
	return count;
}

int main()
{
	int n;
	while(scanf("%d",&n)!=EOF){
		if(n==0){
			break;
		}
		
		int count = f(n);
		
		
		printf("%d\n",count);
	}
		
	return 0;
}
