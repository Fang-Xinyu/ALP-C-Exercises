#include <stdio.h>

void sort(char name[][100],int n)
{
	int i,j;
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			if(strcmp(name[j],name[j+1])>0){
				char str[100];
				strcpy(str,name[j]);
				strcpy(name[j],name[j+1]);
				strcpy(name[j+1],str);
			}
		}
	}
	
	
}

void print(char name[][100],int n)
{
	int i;
	for(i=0;i<n;i++){
		printf("%s\n",name[i]);
	}
}

int main()
{
	int n;
	scanf("%d",&n);
	int i;
	char lis[15][100];
	getchar();
	for(i=0;i<n;i++){
		gets(lis[i]);
	}
	sort(lis,n);
	print(lis,n);
	
	return 0;
}
