#include <stdio.h>     // 看提示    

int main()
{
	int n;
	while(scanf("%d",&n)!=EOF){
		if(n==0){
			break;
		}
		long long sum=1;     //数据范围  
		int count=0;
		while(sum<n){   // <  
			sum*=3;     //乘上去  不要除 
			count++;
		}
		printf("%d\n",count);
	} 
	
	
	
	
	
	return 0;
 } 
