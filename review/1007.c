#include <stdio.h>

int main()
{
	int n;
	while(scanf("%d",&n)!=EOF){
		if(n==0){
			break;
		}
		int dic[45]={-1,1,2};
		if(n==1){
			printf("1\n");
		}else if(n==2){
			printf("2\n");
		}else{
			int i;
			for(i=3;i<=n;i++){
				dic[i]=dic[i-1]+dic[i-2];
			}
			printf("%d\n",dic[n]);
		}
		
	}	
	return 0;
}
