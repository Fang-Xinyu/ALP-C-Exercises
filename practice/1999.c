#include <stdio.h>
#include <string.h>

int main()
{
	char lis[5][105];
	char temp[105];
	int i=0;
	for (i=0;i<5;i++){
		fgets(lis[i],sizeof(lis[i]),stdin);
	}
	int j;
	for (i=0;i<4;i++){
		for(j=0;j<4-i;j++){
			if(strcmp(lis[j],lis[j+1])<0){
				strcpy(temp,lis[j]);
				strcpy(lis[j],lis[j+1]);
				strcpy(lis[j+1],temp);
			}	
		}
	}
	
	strcpy(temp,lis[0]);
	strcpy(lis[0],lis[4]);
	strcpy(lis[4],temp);
	
	for (i=0;i<5;i++){
		printf("%s",lis[i]);
	}
	
	return 0;
}
