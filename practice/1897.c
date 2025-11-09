#include <stdio.h>
int main()
{
	int n;
	while (scanf("%d",&n)!=EOF){
		int i;
		for(i=0;i<2;i++){
			n=n/2;
		} 
		n=n%2;
		printf("%d\n",n);
	
	
	}
	
	return 0;
}
