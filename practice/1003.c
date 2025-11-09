#include <stdio.h>

int main()
{
	int n,m;
	while (scanf("%d %d",&n,&m) != EOF){
		if (n==0 && m==0){
			break;
		}
		int p=0;
		int i,r; 
		for (i=1;i<=n;i++){
			r=n-i;
			if (i*2+r*4==m){
				printf("%d %d\n",i,r);
				p = 1;
				break;
			}
		}
		if (p==0) {
			printf("Error\n");
		}
	}
	
	
	return 0;
 } 
