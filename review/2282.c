#include <stdio.h>
#include <string.h>

int n;

void sort(char *p[100])
{
	int i,j;
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			if(strcmp(p[j],p[j+1])>0){
				char *str=p[j];
				p[j]=p[j+1];
				p[j+1]=str;
			}	
		}
	}
	
}

int main()
{	
	while(scanf("%d",&n)!=EOF){
		getchar();
		if(n==0){
			break;
		}
		int i;
		char lis[100][100];
		char *p[100];
		for(i=0;i<n;i++){
			gets(lis[i]);
			p[i]=lis[i];
		}
		sort(p);
		for(i=0;i<n;i++){
			printf("%s\n",p[i]);
		}		
	}	
	
	return 0;
}
