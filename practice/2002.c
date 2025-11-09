#include <stdio.h>

int main()
{
	char lis[10000];
	char a;
	int i=0;
	while(scanf("%c",&a)!=EOF){
		if (a=='\n'||a=='\0'){
			break;
		}
		lis[i]=a;
		i++; 	
	}
	
	int j;
	for (j=i-1;j>=0;j--){
		printf("%c",lis[j]);
	}
	
	return 0;
}
