#include <stdio.h>

int arm(int n)
{
	int sum=0;
	int p=n;
	while(n!=0){
		int a=n%10;
		sum+=a*a*a;
		n=n/10;
	} 
	if (sum==p){
		return 1;
	}else{
		return 0;
	}	
}

int main()
{
	int m,n,i;
	scanf("%d %d",&m,&n);
	int j=0;
	int lis[1000];
	for (i=m;i<=n;i++){
		if(arm(i)){
			lis[j]=i;
			j++;
		}
	}
	
	int k=j;
	if(k>0){
		printf("Armstrong numbers between %d and %d:\n",m,n);
		for (j=0;j<k-1;j++){
			printf("%d ",lis[j]);
		}	
		printf("%d",lis[k-1]);
		
	}else{
		printf("No Armstrong numbers between %d and %d",m,n);
	}
	return 0;
}
