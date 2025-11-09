#include <stdio.h>

int main()
{
	int a[10000],b[10000];
	int n;
	while(scanf("%d",&n)!=EOF){
		int i;
		int p=0,q=0;
		for (i=0;i<n;i++){
			int k;
			scanf("%d",&k);
			if(k<0){
				a[p++]=k;
			}else{
				b[q++]=k;
			}
		}
		
		for(i=0;i<p;i++){
			printf("%d ",a[i]);
		}
		for(i=0;i<q-1;i++){
			printf("%d ",b[i]);
		}
		printf("%d\n",b[q-1]);
	}

	return 0;
}
