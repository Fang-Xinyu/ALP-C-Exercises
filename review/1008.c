#include <stdio.h>
#include <string.h>
int main()
{
	char re1[]={'E','C','F','A','J','K','L','B','D','G','H','I','V','W','Z','Y','M','N','O','P','Q','R','S','T','U','X'};
	char re2[]={'e','r','w','q','t','y','g','h','b','n','u','i','o','p','s','j','k','d','l','f','a','z','x','c','v','m'};
	char str[1000000];
	while(1){
		gets(str);
		if(strcmp(str,"#")==0){
			break;
		}
		int len=strlen(str);
		int i;
		for(i=0;i<len;i++){
			if(str[i]==' '){
				printf(" ");
			}else if(str[i]>='A'&&str[i]<='Z'){
				printf("%c",re1[str[i]-'A']);
			}else if(str[i]>='a'&&str[i]<='z'){
				printf("%c",re2[str[i]-'a']);
			} 
		}
		printf("\n");
	}
	
	return 0;
}
