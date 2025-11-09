#include <stdio.h>

int main()
{
	char s1[105],s2[105];
	char output[105];
	while(scanf("%s %s",s1,s2)!=EOF){
		int len1=strlen(s1);
		int len2=strlen(s2);
		int i=0;
		int sign=0;
		while(i<len1 || i<len2 || sign==1){
			int x1=(i<len1)? s1[len1-1-i]-'0': 0;
			int x2=(i<len2)? s2[len2-1-i]-'0': 0;
			output[i]=(x1+x2+sign)%10+'0';
			sign=(x1+x2+sign)/10;
			i++;
		} 
		int j;
		for (j=0;j<i/2;j++){
			int temp=output[j];
			output[j]=output[i-1-j];
			output[i-1-j]=temp;
		}
		output[i]='\0'; 
		printf("%s\n",output);
	}
	
	return 0;
 } 
