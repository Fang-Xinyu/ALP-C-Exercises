#include <stdio.h>

int yzsum(int x)
{
	int i;
	int sum=0;
	for (i=1;i<x;i++){
		if (x%i==0){
			sum+=i;
		}
	}
	return sum;
 } 

int main()
{
	int m;
	scanf("%d",&m);
	int i;
	for (i=0;i<m;i++){
		int a,b;
		scanf("%d %d",&a,&b);
		
		if (yzsum(a)==b && yzsum(b)==a){
			printf("YES\n");
		}else{
			printf("NO\n");
		}	
	}
	return 0;
}
