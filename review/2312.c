#include <stdio.h>

int compare(const void *a,const void *b)
{
	int *m=(int *)a;
	int *n=(int *)b;
	return -*m+*n;
}

int main()
{
	int i;
	int s[10];
	for(i=0;i<10;i++){
		scanf("%d",&s[i]);
	}
	qsort(s,10,sizeof(s[0]),compare);
	for(i=0;i<10;i++){
		printf("%d\n",s[i]);
	}
	
	return 0;
 } 
