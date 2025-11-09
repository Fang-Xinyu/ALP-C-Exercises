#include <stdio.h>

int main()
{
	char lis[105];
	fgets(lis,101,stdin);
	lis[strcspn(lis,"\n")]='\0';
	
	char output[105];
	int j=0;
	int i=0;
	while(i<strlen(lis)){
		if( (i<strlen(lis)-1) &&
			(lis[i]=='i'|| lis[i]=='I') && 
			(lis[i+1]=='s'||lis[i+1]=='S') ){
			i+=2;
		}else{
			output[j]=lis[i];
			j++;
			i++;
		}
		
				
	} 
	output[j]='\0';
	printf(output);
	
	
	return 0;
}
