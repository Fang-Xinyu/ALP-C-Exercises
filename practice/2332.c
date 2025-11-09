#include <stdio.h>
#include <string.h>

//错误 无法通过oj 
//两行不一定是按同一个顺序的 

int main()
{
	int m,n,i;
	char lis1[55][25];
	while(scanf("%d %d",&m,&n)!=EOF){
		for(i=0;i<m;i++){
			scanf("%s",lis1[i]);
		}
		
		char lis2[55][25];
		for (i=0;i<n;i++){
			scanf("%s",lis2[i]);
		}
		
		int p=0;
		for (i=0;i<m;i++){
			if(strcmp(lis1[i],lis2[p])==0 && p<n){
				printf("Yes\n");
				p++;
			}else{
				printf("No\n");
			}
		}
	}
	return 0;
}
