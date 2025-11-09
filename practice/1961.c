#include <stdio.h>

int main()
{
	long n;
	while (scanf("%ld",&n)!=EOF){
		n=n*n*n;
		n=n%1000;
		printf("%ld",n);
	}
		
	return 0;
}
