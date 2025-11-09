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
	
	int j=0,count=0;
	i=0;
	while (i<m && j<n){
		if(f[i]==g[j]){
			count++;
			i++;
			j++;
		}else if (f[i]<g[j]){
			i++;
		}else{
			j++;
		}
		
	}
	printf("%d",count);
	
	return 0;
}
