#include <stdio.h>

strcmp(char *p1, char *p2)
{
	while(*p1!='\0'){
		if(*p1==*p2){
			p1++;
			p2++;
		}else{
			return *p1-*p2;
		}
	}
	return 0;
 } 

int main()
{
	int n;
	scanf("%d",&n);
	char s1[1000];
	char s2[1000];
	int j;
	for(j=0;j<n;j++){
		scanf("%s %s",s1,s2);
		printf("%d\n",strcmp(s1,s2));
	}	
	return 0;
}
