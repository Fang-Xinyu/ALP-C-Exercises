#include <stdio.h>
int compare(const void *a,const void *b)
{
	int *m=(int *)a;
	int *n=(int *)b;
	return (*m-*n);
	
}

void sort(int *arr,int len)
{
	int i;
	int ji[55],ou[55];
	int l=0,r=0;
	for(i=0;i<len;i++){
		if(i%2==0){
			ji[l++]=arr[i];
		}else{
			ou[r++]=arr[i];
		}
	}

	qsort(ji,l,sizeof(int),compare);
	qsort(ou,r,sizeof(int),compare);
	l=0,r=0;
	for(i=0;i<len;i++){
		if(i%2==0){
			arr[i]=ji[l++];
		}else{
			arr[i]=ou[r++];
		}
	}
	
	
}

int main(void)
{
	int lis[100]={0};
	int p=0;
	while( 1 ){
		scanf("%d",&lis[p]);
		if (lis[p]==0){
			break;
		}
		p++;
	}	
	sort(lis,p);
	int i;
	for (i=0;i<p-1;i++){
		printf("%d ",lis[i]);
	}
	printf("%d\n",lis[p-1]);
	
	return 0;
}
