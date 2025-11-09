#include <stdio.h>   //整行读取数据 

int main()
{
	char lis[1000];
	while(fgets(lis,sizeof(lis),stdin)!=NULL){  
		int len=strlen(lis);
		int i;
		for(i=0;i<len-3;i++){
			if ((lis[i]=='s'||lis[i]=='S')&&(lis[i+1]=='a'||lis[i+1]=='A')&&
			(lis[i+2]=='l'||lis[i+2]=='L')&&(lis[i+3]=='t'||lis[i+3]=='T')){
				printf("%s",lis);
			}
		} 
	}
	
	
	
	return 0;
}
