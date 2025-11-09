#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
	char lis[1000];
	gets(lis);
	int len=strlen(lis);
	int p=0;
	char output[1000];
	int i;
	for(i=0;i<len;i++){
		if(isdigit(lis[i])|| isalpha(lis[i])){ // 是|| 			
			output[p++]=lis[i];
		}else if(p!=0){     //!!!!!!!!!要是连续两个 
			output[p]='\0';
			p=0;
			printf("%s\n",output);
		}		
	}
	if(p!=0){               //!!!!!
		output[p]='\0';
		printf("%s",output);
	}
	
	return 0;
}
