#include <stdio.h>

int is_p(int n)
{
	int k;
	int sq=(int)sqrt(n);
	for(k=2;k<=sq;k++){
		if(n%k==0){
			return 0; 
		}
	}
	return 1;
}

int main()
{
	int su;
	while(scanf("%d",&su)!=EOF){
		if (su==0){
			break;
		}
		int count=0;
		int a[200];
		int i,j=0;
		for (i=3;i<200;i++){
			if(is_p(i)){
				a[j]=i;
				j++;
			}
		}
		int k,u;
		for (i=0;i<j;i++){
			for(k=i;k<j;k++){
				for(u=k;u<j;u++){
					if(su==a[i]+a[k]+a[u]){
						count++;
						break;
					}
				} 		
			}			
		}			
			
		printf("%d\n",count);
	}

	
	return 0;
 } 
