#include <stdio.h>

void ju(char *str,int len)
{
	int i;
	for(i=0;i<len/2;i++){
		if(str[i]!=str[len-1-i]){
			printf("No\n");
			return;
		}
	}
	printf("Yes\n");
}

int main()
{
	char lis[105];
	while(scanf("%s",lis)!=EOF){
		int len=strlen(lis);
		if(lis[len-1]=='\n'){
			lis[len-1]='\0';
			len--;
		}
		ju(lis,len);
	}
	
	
	return 0;
 } 
