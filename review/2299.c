#include <stdio.h>

struct date{
	int x;
	char y[10];
};

int compare(const void *a,const void *b)
{
	int *m=(int *)a;
	int *n=(int *)b;
	return (*n-*m);
}

int main()
{
	int t;
	scanf("%d",&t);
	int k;
	for(k=0;k<t;k++){
		char stnum[10];
		scanf("%s",stnum);
		int p=0;
		struct date lis[1005];
		while(scanf( "%s %d",lis[p].y,&lis[p].x )!=EOF){
			if(strcmp(lis[p].y,"0")==0&&lis[p].x==0){
				break;
			}
			p++;
		}
		qsort(lis,p,sizeof(struct date),compare);
		int count=1;
		int i;
		int sc=lis[0].x;
		int ct1=0;
		for(i=0;i<p;i++){
			if(sc==lis[i].x)
				ct1++;
			else{
				count+=ct1;
				ct1=1;
				sc=lis[i].x;
			}
			if(strcmp(lis[i].y,stnum)==0){
				break;	
			}
		}
		
		printf("%d\n",count);
	}
	
	
	return 0;
}
