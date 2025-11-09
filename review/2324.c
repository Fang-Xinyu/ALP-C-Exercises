#include <stdio.h>

char str[400];

int dg(char *lis,int len)
{
	int sum=0;
	int i;
	for(i=0;i<len;i++){
		sum=sum*26+(lis[i]-'A');
	}
	return sum;
}

int XYZ(int n)
{
	int p=0;
	while(n!=0){
		str[p]=n%26+'A';
		n=n/26;
		p++;
	}
	str[p]='\0';
}

int main()
{
	char s1[205];
	char s2[205];
	int i;
	while(scanf("%s %s",s1,s2)!=EOF){
		int len1=strlen(s1);
		int len2=strlen(s2);
		int a=dg(s1,len1);
		int b=dg(s2,len2);
		XYZ(a+b);
		int k=strlen(str);
		for(i=k-1;i>=0;i--){
			printf("%c",str[i]);
		}
		printf("\n");
	} 
	
	return 0;
}
