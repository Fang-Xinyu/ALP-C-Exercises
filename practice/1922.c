#include <stdio.h>
int main()
{
	int n;
	while (scanf("%d",&n)!=EOF){
		int i,sum=0; 
		for (i=0;i<4;i++){
			sum+=n%10;
			n=n/10;
		}
		
		printf("%d\n",sum);
	}
	return 0;
}
