#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	int m=n*n;
	int lis[100];
	int p=1;
	while(n>0){
		if(n%10!=m%10){
			printf("不是守形数\n");
			p=0;
			break;
		}
		n=n/10; //这两行不要忘了 
		m/=10;
	}
	if(p==1){
		printf("是守形数\n");
	}
	
	return 0;
 } 
