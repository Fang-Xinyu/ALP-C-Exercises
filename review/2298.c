#include <stdio.h>
#include <string.h>
int compare(const void *a,const void *b)
{
	int *m=(int *)a;
	int *n=(int *)b;
	return *m-*n;
	
}

int main()
{
	int t;
	int lis[55][2];
	scanf("%d",&t);
	int i,j,k;
	for(i=0;i<t;i++){
		int n;
		scanf("%d",&n);
		for(j=0;j<n;j++){
			scanf("%d %d",&lis[j][0],&lis[j][1]);
		} 
		qsort(lis,n,sizeof(lis[0]),compare);
		for(j=0;j<n;j++){
			char chang[30]=">+";
			for(k=0;k<lis[j][0]-2;k++){
				strcat(chang,"-");
			}
			strcat(chang,"+>\n");
			for(k=0;k<lis[j][1];k++){
				printf("%s",chang);
			}
		printf("\n");
		}
		
	}
	
	
	return 0;
}
