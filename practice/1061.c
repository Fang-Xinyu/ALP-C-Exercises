#include <stdio.h>

int main()
{
	int n;
	while (scanf("%d",&n)!=EOF){
		if (n==0){
			break;
		}
		int a[30];
		
		int h;
		for (h=1;h<n+1;h++){
			a[h-1]=1;
			int g,j;
			for (g=h-2;g>0;g--){
				a[g]+=a[g-1];
			}
			for (j=0;j<h-1;j++){
				printf("%d ",a[j]);
			}
			printf("%d\n",a[h-1]);	
		}
		
		printf("\n");
	}
	
	return 0;
}
