#include <stdio.h>

int main()
{
	int n;
	int lis[100];
	while(scanf("%d",&n)!=EOF){
		int i;
		for (i=0;i<n+1;i++){
			scanf("%d",&lis[i]); 
		}
		
		int sc;
		scanf("%d",&sc);
		for(i=0;i<n;i++){
			if(lis[i]==sc){
				break;
			}
		}	

		int c=1;
		int j;
		if(i==0||i==n){  //两端特殊情况 范围也要注意 
			c=1;
		}else{
			for(j=0;j<i;j++){ //是 i 不是 i+1 
				c=c*(n-j);
			}
			for(j=0;j<i;j++){ //同上 
				c=c/(j+1);
			}	
		}		
		double  p=c*1.0; //不能直接相等 
		for(j=0;j<n;j++){ //*0.5  /2 
			p=p/2;
		}
		printf("%.6f\n",p);
	}
	
	
	
	
	return 0;
}
