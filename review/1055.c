#include <stdio.h>
#include <string.h>
int main()
{
	char str[105];
	char output[105];
	char dic[]={2,2,2,3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,7,8,8,8,9,9,9,9};
	while(scanf("%s",str)!=EOF){
		int len=strlen(str);
		int i;
		for (i=0;i<len;i++){
			if(str[i]>='a'&&str[i]<='z'){
				output[i]=dic[str[i]-'a']+'0';
			}else if(str[i]>='A'&&str[i]<='Z'){
				output[i]=(str[i]-'A'+1)%26+'a';		
			}else{
				output[i]=str[i];
			}		
		}
		output[i]='\0';
		printf("%s\n",output);		
	}
	return 0;
 } 
