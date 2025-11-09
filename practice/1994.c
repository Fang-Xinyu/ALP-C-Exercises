#include <stdio.h>

int main()
{
	char s1[25];
	char s2[25];
	gets(s1);
//	s1[strcspn(s1, "\n")] = '\0';  //有没有都行 去除末尾换行符 
	
	int j=0;
	int i;
	for(i=strlen(s1)-1;i>=0;i--){
		s2[j]=s1[i];
		j++;
	}
	
	s2[j]='\0';
	printf("%s\n",s2);
	
	
	return 0;
}
