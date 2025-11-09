#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int compare(const void *a,const void *b)
{
	return strcmp((char*)a, (char*)b);
}

int same(char a[], char str[],int len)
{
	if(strlen(a)!=len){
		return 0;
	}
	int lis[100]={0};
	int i,j;
	for(i=0;i<len;i++){
		int p=0;
		for(j=0;j<len;j++){
			if(str[i] == a[j] && lis[j]==0){
				lis[j]=1;
				p=1;
				break;
			}
		}
		if(p==0){
			return 0;
		}
	}
	return 1;
}

int main()
{
	char a[1000][100];
	int p=0;
	while(scanf("%s",&a[p])!=EOF){		
		if(strcmp(a[p],"******")==0){
			break;
		}		
		p++;
	}
	
	char str[100];
	while(scanf("%s",str)!=EOF){
		int count=0;
		int len=strlen(str);
		int i;
		char dic[1000][100];
		for(i=0;i<p;i++){			
			if(same(a[i],str,len)){
				strcpy(dic[count++],a[i]);	
			}
		}
		if(count==0){
			printf(":(");
		}
		qsort(dic,count,sizeof(char)*100,compare);
		
		for(i=0;i<count;i++){
			if(i!=0){
				printf(" ");
			}
			printf("%s",dic[i]);
		}
		printf("\n");
	}
	return 0;
}
