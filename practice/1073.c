#include <stdio.h>

int main()
{
	int m,n;
	scanf("%d %d",&m,&n);
	int f[1000],g[1000];
	
	int i;
	for (i=0;i<m;i++){
		scanf("%d",&f[i]);
	}
	for (i=0;i<n;i++){
		scanf("%d",&g[i]);
	}
	
	int count=0,j;
	for (i=0;i<m;i++){
		for (j=0;j<n;j++){
			if (f[i]>g[j]){
				count++;
			}
		}
	}
	
	printf("%d",count);
	
	return 0;
}
