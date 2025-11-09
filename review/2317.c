#include <stdio.h>
#include <string.h>
int main()
{
	char s1[25];
	char s2[25];
	scanf("%s %s",s1,s2);
	int len1=strlen(s1);
	int len2=strlen(s2);
	if(s2[len2-1]=='\n'){
		s2[len2-1]='\0';
		len2-=1;
	}
	
	int p=0;
	int count=0;
	int i=0;  //ÓÃ while Òª¸³³õÖµ 
	while(i<=len1-len2){
		while(p<len2&&s1[i+p]==s2[p]){ 
			p++;
		}
		if(p==len2){
			count++;
			i+=len2;
			p=0;
			continue;
		}
		i++;
		p=0;
	}
	printf("%d",count);
	
	return 0;
 } 
