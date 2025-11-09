#include <stdio.h>

int main()
{
	long n;
	while (scanf("%ld",&n)!=EOF){
		while(n>0){
			printf("%ld",n%10);
			n=n/10;
		}
		printf("\n");
	}
		
	return 0;
}
