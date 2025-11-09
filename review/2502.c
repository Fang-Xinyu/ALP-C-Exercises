#include <stdio.h> //≤ª”√∏¥œ∞ 

int main()
{
	char s1[1000],s2[1000];
	scanf("%s %s",s1,s2);
	int len1=strlen(s1);
	int len2=strlen(s2);
	int p=0,q=0;
	char output[1000];
	int i=0;
	while(p<len1&&q<len2){
		output[i++]=s1[p]<s2[q]?s1[p++]:s2[q++];
	} 
	if(p==len1){
		while(q<len2){
			output[i++]=s2[q++];
		}	
	}
	if(q==len2){
		while(p<len1){
			output[i++]=s1[p++];
		}	
	}
	output[i]='\0';
	printf("%s",output);
	return 0;
}
