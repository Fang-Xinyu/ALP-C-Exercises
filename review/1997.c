#include <stdio.h>
void cp_m(char *lis,int n,char *output)
{
	strcpy(output,lis+n-1);
	printf("%s",output);
}

int main()
{
	char str[1000],output[1000];
	gets(str);
	int m;
	scanf("%d",&m);
	cp_m(str,m,output);
	
	return 0;
}
