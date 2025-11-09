#include <stdio.h>

struct date {
	int x;
	char y[30];
};

int compare(const void*a,const void*b)
{
	int *m=(int *)a;
	int *n=(int *)b;
	return (*m-*n);
}

int main()
{
	int t;
	scanf("%d",&t);
	struct date lis[1000];
	int k;
	for(k=0;k<t;k++){
		int n;
		int i;
		scanf("%d",&n);
		for(i=0;i<n;i++){
			scanf("%s %d",lis[i].y, &lis[i].x);
			
		}
		qsort(lis,n,sizeof(struct date),compare);
		
		for(i=0;i<n;i++){
			printf("%s %d\n",lis[i].y,lis[i].x);
		}
	}
	
	
	
	return 0;
}
