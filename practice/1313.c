#include <stdio.h>

int compare(const void *a, const void *b) {
    int *x = (int *)a;
    int *y = (int *)b;
    return (*x - *y); 
}

int main()
{
	int n,k;
	int a[1005][2];
	while(scanf("%d %d",&n,&k)!=EOF){
		if(n==0 && k==0){
			break;
		} 
		int i;
		for (i=0;i<k;i++){
			char name[20];
			scanf("%s %d %d",name,&a[i][0],&a[i][1]);
		}

			
		qsort(a, k, sizeof(int)*2, compare);

		int sum=0;
		int p=0;
		while(n>a[p][1]*a[p][0] && p<k){  // < 索引从0开始 
			sum+=a[p][1];
			n-=a[p][1]*a[p][0];
			p++;
		}
		if(n!=0 && p<k){
			sum+=n*1.0/a[p][0];
		}
		
		printf("%d\n",sum);
	}

	
	
	
	return 0;
}
