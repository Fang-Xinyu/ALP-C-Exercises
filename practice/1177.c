#include <stdio.h>

int main()
{
	int h;
	while(scanf("%d",&h)!=EOF){
		int i,j;
		for (i=0;i<h;i++){
			for (j=0;j<h-i-1;j++){
				printf(" ");
			}
			for (j=0;j<i*2+1;j++){
				printf("*");
			}
			printf("\n");		
		}
		
		h-=1;
		for (i=0;i<h;i++){
			for (j=0;j<i+1;j++){
				printf(" ");
			}
			for (j=0;j<h*2-i*2-1;j++){
				printf("*");
			}
			printf("\n");		
		}
		
	}
	
	return 0;
}
