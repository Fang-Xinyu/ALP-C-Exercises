#include <stdio.h>
#include <math.h> //猴子分桃 数学公式：5^n-4   4^n+n-4 
int main()
{
	int n;
	while(scanf("%d",&n)!=EOF){
		if(n==0){
			break;
		}
		long long sum=pow(5,n)-4;
		long long old=pow(4,n)+n-4;
		printf("%lld %lld\n",sum,old);
	}
	
	
	return 0;
}
