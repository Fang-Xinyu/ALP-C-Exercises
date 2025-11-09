#include <stdio.h>

int main()
{
	int m;
	scanf("%d",&m);
	int i,j;
	int a[6][6]={0};
	int p=0;
	for (i=0;i<m;i++){
		for(j=0;j<m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	
	for (i=0;i<m;i++){
		int max=0;
		for(j=1;j<m;j++){
			if(a[i][j]>a[i][max]){
				max=j;
			}
		}
		int k;
		int min=i;
		for(k=0;k<m;k++){
			if(k==i){
				continue;
			}
			if(a[k][max]<a[min][max]){
				min=k;
			}
			
		}
		if(min==i){
			printf("%d %d\n",min,max);
			p=1;
			break;
		}
	}
	if(p==0){
		printf("NO\n");
	}
	
	return 0;
}
