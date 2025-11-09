#include <stdio.h> //≤ª”√∏¥œ∞ 

int main()
{
	int m,n;
	int f[1005],g[1005];
	scanf("%d %d",&m,&n);
	int i;
	for(i=0;i<m;i++){
		scanf("%d",&f[i]);
	}
	for(i=0;i<n;i++){
		scanf("%d",&g[i]);
	}
	int p=0,q=0,count=0;
	while(p<m && q<n){
		if(f[p]==g[q]){
			p++;
			q++;
			count++;
		}else if(f[p]<g[q]){
			p++;
		}else{
			q++;
		}
	}
	printf("%d",count);
	
	return 0;
 } 
