#include <stdio.h>
int yz(int n)
{
	int i;
	int sum=0;
	for(i=1;i<n;i++){
		if(n%i==0){
			sum+=i;
		}
	}
	return sum;
}

int main()
{
	int n,a,b,i;
	while(scanf("%d",&n)!=EOF){
		for(i=0;i<n;i++){
			scanf("%d %d",&a,&b);
			if(a==yz(b)&&b==yz(a)){
				printf("YES\n");
			}else{
				printf("NO\n");
			}
		}
	}
	
	return 0;
}
