#include <stdio.h>

int factorsum(int n){
	int i;
	int count=0;
	for (i=1;i<n;i++){
		if(n%i==0){
			count+=i;
		}
	}
	return count;
}

int main()
{
	int m,n;
	scanf("%d %d",&m,&n);
	int i;
	
	int lis[10005]={0};
	int j=0;
	
	for (i=m;i<=n;i++){
		if(i==factorsum(i)){
			lis[j]=i;
			j++;
		}
	}
	for (i=0;i<j-1;i++){
		printf("%d ",lis[i]);
	}
	printf("%d",lis[j-1]);
	
	return 0;
}
