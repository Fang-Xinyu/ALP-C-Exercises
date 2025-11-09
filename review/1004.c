#include <stdio.h>

int s1[1005],s2[1005];

int compare(const void *a,const void *b)
{
	int *m=(int *)a;
	int *n=(int *)b;
	return *m-*n;
}

int main()
{
	int n;
	while(scanf("%d",&n)!=EOF){
		if(n==0){
			break;
		}
		int i;
		for(i=0;i<n;i++){
			scanf("%d",&s1[i]);
		}
		for(i=0;i<n;i++){
			scanf("%d",&s2[i]);
		}
		
		qsort(s1,n,sizeof(int),compare);
		qsort(s2,n,sizeof(int),compare);  //两个都要比 
		
		int q=0,p=0;
		int count=0;
		while(q<n){
			if(s1[q]>s2[p]){
				q++;
				p++;
				count++;
			}else{
				q++;
			}
		}
		if(count>n/2){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}
	
	
	
	return 0;
 } 
