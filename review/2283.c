#include <stdio.h>

void sort(int **p,int n)
{
	int i,j;
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			if(*p[j]>*p[j+1]){
				int *temp=p[j];
				p[j]=p[j+1];
				p[j+1]=temp; 
			}
		}
	}
}

int main()
{
	int n,i;
	int lis[100];
	int *p[100];
	while(scanf("%d",&n)!=EOF){
		if(n==0){
			break;
		}
		for(i=0;i<n;i++){
			scanf("%d",&lis[i]);
			p[i]=&lis[i];
		} 
		sort(p,n);
		for(i=0;i<n;i++){
			printf("%d ",*p[i]);
		}
		printf("\n");
	}
	
	
	return 0;
}
