#include <stdio.h>

int main()
{
	char str[1000];
	char c;

	fgets(str,sizeof(str),stdin);
	
	scanf("%c",&c);
	int i=0;
	
	while(str[i]!='\n' && str[i]!='\0'){
		if (str[i]!=c){
			printf("%c",str[i]);	
		}
		i++;
	}

	return 0;
}
