#include <stdio.h>

int main()
{
	int n;
	while (scanf("%d",&n) != EOF){
		long long a[9]={1,121,12321,1234321,123454321,12345654321,1234567654321,123456787654321,12345678987654321};
		int i,j;
		for (i=0;i<n;i++){
			for (j=0;j<n-i-1;j++){
				printf(" ");
			}
			printf("%lld\n",a[i]);
		}
		
		for (i=n-2;i>=0;i--){
			for (j=0;j<n-i-1;j++){
				printf(" ");
			}
			printf("%lld\n",a[i]);
		}
		
	}

	return 0; 
}
