#include <stdio.h>

int main()
{
	char a;
	while(scanf("%c",&a)!=EOF){
		if (a>='A' && a<='Z'){
			a=a-'A'+'a';
		}else if (a>='a' && a<='z'){
			a=a-'a'+'A';
		}
		printf("%c",a);
	}
	return 0;
}
