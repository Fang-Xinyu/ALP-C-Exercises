#include <stdio.h>

int is_hui(int n)
{
	int k;
	for (k=2;k<=10;k++){
		int a[30];
		int i=0;
		int yu=n,st1=0,st2=0;
		while(yu>0){
			a[i]=yu%k;
			st1=st1*10+a[i];
			yu=yu/k;
			i++;
		}
		int j;
		for (j=i-1;j>=0;j--){
			st2=st2*10+a[j];
		}
		if(st1==st2){
			return 1;
		}
	}
	return 0;	
}

int main()
{
	int n;
	while(scanf("%d",&n)!=EOF){
		if (is_hui(n)){
			printf("Yes\n"); 
		}else{
			printf("No\n");
		}
	}
	
	return 0;
}
