#include <stdio.h>

int prime(int n)
{
	int k=sqrt(n);
	int i;
	if (n==1){
		return 0;
	}else if(n==2){
		return 1;
	}
	for (i=2;i<=k+1;i++){
		if(n%i==0){
			return 0;
		}
	}
	return 1;
}

int inv(int n)
{
	int sum=0;
	while(n!=0){
		sum=sum*10+n%10;
		n=n/10;
	}
	return sum;	
}

int main()
{
	int m,n;
	scanf("%d %d",&m,&n);
	int lis[1000];
	int count =0;
	int i;
	for (i=m;i<n+1;i++){
		if(prime(i) && prime(inv(i))){
			lis[count]=i;
			count++;
		}
	}
	
	for (i=0;i<count;i++){
		printf("%5d",lis[i]);
		if(i%10==9){
			printf("\n");
		}
	}
	
	return 0;
}
