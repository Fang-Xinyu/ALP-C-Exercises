#include <stdio.h>

int main()
{
	int n;
	while(scanf("%d",&n)!=EOF){
		int minfu=-10000000;
		int i,k;
		long long sum=1;
		int p=0;
		for (i=0;i<n;i++){
			scanf("%d",&k);
			if(k!=0){
				p+=1;
				sum*=k;
				
				if(k<0 && abs(k)<abs(minfu)){
					minfu=k;
				}
			}	
		}
		
		if(p==0||p==1||(p==2&&sum<0)){
			sum=0;
		}else if (sum<0){
			sum=sum/minfu;
		}
		
		printf("%lld\n",sum);
	} 
	return 0;
}
