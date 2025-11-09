#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	int i=2;
	int k=(int)sqrt(n)+1;
	int m=n;
	int lis[10000];
	int p=0;
	while(i<=k){
		if(m%i==0){
			m=m/i;
			lis[p]=i;
			p++;
		}else{
			i++;
		}
	}
	printf("%d=",n);
	for(i=0;i<p-1;i++){
		printf("%d*",lis[i]);
	}
	printf("%d",lis[p-1]);
	
	return 0;
 } 
