#include <stdio.h>
#include <math.h>

int is_su(int n)
{
	int i;
	int s=sqrt(n)+1;
	if(n==1){
		return 0;
	}else if(n==2){
		return 1;
	}else{
		for(i=2;i<=s;i++){
			if(n%i==0){
				return 0;
			} 
		}	
		return 1;
	}
	
}

int main(void)
{
	int m,n;
	scanf("%d %d",&m,&n);
	int i;
	for(i=m;i<=n-2;i++){
		if(is_su(i) && is_su(i+2)){
			printf("%d %d\n",i,i+2);
		}
	}
	
	
	return 0;
}
