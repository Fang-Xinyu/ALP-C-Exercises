#include <stdio.h>

int main()
{
	int n;
	int i;
	while(scanf("%d",&n)!=EOF){
		if(n==0){
			break;
		}
		long long m=1,k=0;
		for(i=0;i<n-1;i++){
			m=m+k;
			k=m-k;
		}
		printf("%lld\n",m+k);
	}
	
	
	return 0;
}
