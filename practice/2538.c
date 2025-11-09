#include <stdio.h>
#include <math.h>

int is_p(int n)
{
	int i;
	int k=sqrt(n);
	if(n==1){
		return 0;
	}
	if(n==2){
		return 1;
	}
	for (i=2;i<=k;i++){
		if(n%i==0){
			return 0;
		}
	}
	return 1;
}

int main()
{
	int a,b;
	while(scanf("%d %d",&a,&b)!=EOF){
		int sum=0;
		int i;
		if (a>b){
			int t=a;
			a=b;
			b=t;
		} 
		for(i=a+1;i<b;i++){
			if (is_p(i)){
				sum+=i;
			}
		}
		printf("%d\n",sum);
		
	} 

	return 0;
}
