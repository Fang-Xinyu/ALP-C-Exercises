#include <stdio.h>
#include <ctype.h>

int main()
{
	char str[260];
	while ( (fgets(str,sizeof(str),stdin)) != 0){
		if (str[0]=='#'){
			break;
		}
		int sum=0;
		int i=0;
		while(str[i]!='\0' && str[i]!='\n'){
			if (isupper(str[i])){
				sum+=(i+1)*(str[i]-'A'+1);
			}
			i++;
		}
		printf("%d\n",sum);
		
	}
	
	
	return 0;
}
