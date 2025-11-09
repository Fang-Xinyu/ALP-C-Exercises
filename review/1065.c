#include <stdio.h>

int main()
{
	int m,n;
	int dic[]={6,28,496,8128,33550336};
	while(scanf("%d %d",&m,&n)!=EOF){
		if(m==0&&n==0){
			break;
		}
		int i;
		int count=0;
		for(i=0;i<5;i++){
			if(dic[i]>=m&&dic[i]<=n){
				if(count==0){
					printf("%d",dic[i]);
					count=1;
				}else{
					printf(" %d",dic[i]);
				}				
			}
		}
		if(count==0){
			printf("No");
		}
		printf("\n");
	}
	return 0;
}
