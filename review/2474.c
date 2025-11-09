#include <stdio.h>

void ni(char *str)
{
	int len=strlen(str);
	int i=0,j=len-1;
	while(i<j){
		char temp=str[i];
		str[i]=str[j];
		str[j]=temp;
		i++;
		j--;
	}
} 

void cat(char*s1,char*s2)
{
	int len1=strlen(s1);
	int len2=strlen(s2);
	int i;
	for(i=0;i<len2;i++){
		s1[len1+i]=s2[i];
	}
	s1[len1+len2]='\0';
}

int main()
{
	char s1[1000],s2[1000];
	scanf("%s %s",s1,s2);
	ni(s1);
	ni(s2);
	cat(s1,s2);
	printf("%s",s1);
	
	return 0;
}
