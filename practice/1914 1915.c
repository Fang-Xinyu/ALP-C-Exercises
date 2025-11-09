#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	int s;
	if(n==100){
		s=5;
	}else{
		s=n/10-4;
	}
	
	if(s<1){
		s=1;
	}
	
	printf("%d",s);
	return 0;
 } 
