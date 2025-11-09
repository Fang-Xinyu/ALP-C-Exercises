#include <stdio.h>

int main(void)
{
	int a[2][4];
	int p=0;
	while(scanf("%d %d %d %d",&a[p][0],&a[p][1],&a[p][2],&a[p][3])!=EOF){
		p++;
		scanf("%d %d %d %d",&a[p][0],&a[p][1],&a[p][2],&a[p][3]);
		p=0;
		int p1=(a[0][3]-a[0][1])*(a[1][2]-a[1][0]);
		int p2=(a[1][3]-a[1][1])*(a[0][2]-a[0][0]);
		if (p1!=p2){
			printf("Yes\n");
		}else if ((a[0][3]-a[0][1])*(a[1][0]-a[0][0])==(a[0][2]-a[0][0])*(a[1][1]-a[0][1])){
		//÷ÿ∫œ 
			printf("Yes\n");
		}else{
			printf("No\n");
		}
	}
	
	
	return 0;
}
