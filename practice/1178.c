#include <stdio.h>
#include <string.h>

int main()
{
	char n[1000];
	scanf("%s",&n);
	
	int len=strlen(n);
	int i;
	for (i=0;i<len;i++){
		if ( i>0 ){
			printf(" ");
		}
		printf("%c",n[i]);
		
	}
	printf("\n");
	
	
	
	return 0;
}
