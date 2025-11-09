#include <stdio.h>
int compare(const void *a,const void *b)
{
	int *m=(int *)a;
	int *n=(int *)b;
	return (*m-*n);
}


int xh(int n)
{
	int w[4];
	int i;
	for(i=0;i<4;i++){
		w[i]=n%10;
		n=n/10;
	}
	qsort(w,4,sizeof(int),compare);
	int n1=0,n2=0;
	for(i=0;i<4;i++){
		n1=n1*10+w[i];
		n2=n2*10+w[3-i];
	}
	n=n2-n1;
	return n;
}

int main()
{
	int n;
	scanf("%d",&n);
	int lis[10005]={0};
	int dic[1005];
	int count=0;
	while(lis[n]==0){
		lis[n]=1;
		dic[count++]=n;
		n=xh(n);
	}
	int i;
	for(i=0;i<count;i++){
		printf("%d->",dic[i]);
	}	
	printf("%d",n);
	return 0;
}
