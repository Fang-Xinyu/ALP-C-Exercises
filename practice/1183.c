#include <stdio.h>

int main()
{
	int c,count=0;
	int pre=0;
	while ((c=getchar()) != '\n'){
		if (isalpha(c) && pre==0){
			count++;
			pre=1;
		}else if(isalpha(c)==0 && pre==1){
			pre=0;
		}
		
	} 

	printf("%d",count);
	
	return 0; 
} 
