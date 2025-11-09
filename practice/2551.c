#include <stdio.h>

int factorsum(int n){
	int i;
	int sum=0;
	for (i=1;i<n;i++){
		if(n%i==0){
			sum+=i;
		}
	}
	return sum;
}

int main()
{
	int m,n;
	while(scanf("%d %d",&m,&n)!=EOF){
		if(factorsum(m)==n && factorsum(n)==m){
			printf("Yes\n");
		} else{
			printf("No\n");
		}
	
	}

	return 0;
}
