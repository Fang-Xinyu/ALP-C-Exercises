#include <stdio.h>   //前缀 后缀 二分 

int find(int n,int lis1[],int len)
{
	int i=1,j=len;
	while(i<=j){
		int m=(i+j)/2;
		if(lis1[m]==n){
			return 1;
		}else if(lis1[m]<n){
			i=m+1;
		}else{
			j=m-1;
		}
	}
	return 0;
	
}

int main()
{
	int n;
	int i;
	int a[20005]={0};
	while(scanf("%d",&n)!=EOF){
		if(n==0){
			break;
		}
		int lis1[20005]={0},lis2[20005]={0};
		for(i=1;i<=2*n;i++){ 
			scanf("%d",&a[i]);
			lis1[i]=lis1[i-1]+a[i];
		}
		int count=0; 
		for(i=2*n;i>=1;i--){
			lis2[i]=lis2[i+1]+a[i];
			if(find(lis2[i],lis1,2*n)){
				count++;
			}
		}
		printf("%d\n",count);
	
	}
	
	
	
	
	return 0;
 } 
