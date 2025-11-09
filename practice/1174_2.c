//1174
#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main()
{
	char str1[82],str2[81];
	fgets(str1,sizeof(str1),stdin);
	
	str1[strcspn(str1, "\n")] = '\0';
	
	int i=0,j=0;
	int pre=1;
	
	while(str1[i]!='\0'){
		if (isdigit(str1[i])){
			str2[j]=str1[i];
			j++;
			pre=1;
		}else if(pre!=0){
			str2[j]='*';
			j++;
			pre=0;
		}
			
		i++;
	}

	str2[j]='\0';
	printf("%s",str2);
	
	return 0;
 } 
