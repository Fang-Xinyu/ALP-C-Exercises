#include <stdio.h>
#include <string.h>
int main ()
{
	char str1[101],str2[101];
	fgets(str1,sizeof(str1),stdin);
	
	int i=strlen(str1),j=0;
	while (i>=0){
		if (str1[i]!='\0' && str1[i]!='\n'){
			str2[j]=str1[i];
			j++;
		}
		i--;
		
	}
	str2[j]='\0';
	printf("%s",str2);
	
	
	return 0;
}
