#include <stdio.h>  //约瑟夫环数学公式：f(n)=( f(n-1)+k )%n  n:人数  k:步长 

int main()
{
	int lis[1000001];  //我的电脑上运行不了, oj上可以 (n如果小可以用char) 
	int i;
	for(i=2;i<1000000;i++){
		lis[i]=(lis[i-1]+3)%i;
	}
	
	int n;
	while(scanf("%d",&n)!=EOF){
		if(n==0){
			break;
		}
		printf("%d\n",lis[n]+1);
	}
	
	
	return 0;
}
