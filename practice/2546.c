#include <stdio.h>
#include <string.h>

int jo(int len,char str[])
{
	int w=str[len-1]-'a';
	if(w%2==0){
		return 0; 
	}else{
		return 1;
	}
	
}

int main()
{
	char s1[100],s2[100];
	while(scanf("%s %s",&s1,&s2)!=EOF){
		if(s1[0]=='0'&&s2[0]=='0'){
			break;
		}
		int len1=strlen(s1);
		int len2=strlen(s2);
		
		if(jo(len1,s1)==jo(len2,s2)){
			printf("Yes\n");
		}else{
			printf("No\n");
		}
	}
	
	
	return 0;
}
