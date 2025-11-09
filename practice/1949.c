#include <stdio.h>

int main()
{
	char str[10000];
	gets(str);
	int count[4]={0};
	
	int i;
	for (i=0;i<strlen(str);i++){
		if((str[i]>='A'&&str[i]<='Z')||(str[i]>='a'&&str[i]<='z')){
			count[0]+=1;
		}else if(str[i]==' '){
			count[1]+=1;
		}else if(str[i]>='0'&&str[i]<='9'){
			count[2]+=1;
		}else{
			count[3]+=1;
		}
	}
	printf("%d,%d,%d,%d",count[0],count[1],count[2],count[3]);
	
	
	return 0;
}
