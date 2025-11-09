#include <stdio.h>

int main()
{
	char t[105],s[105];
	int pos;
	
	scanf("%s",&t);
	scanf("%s",&s);
	scanf("%d",&pos);
	
	int i;
	for (i=0;i<pos;i++){
		printf("%c",s[i]);		
	} 
	for (i=0;i<strlen(t);i++){
		printf("%c",t[i]);		
	}
	for (i=pos;i<strlen(s);i++){
		printf("%c",s[i]);	
	}
	
	return 0;
 } 
