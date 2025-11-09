#include <stdio.h>

int zh(int m,int n)
{
	if(n>m-n){
		return zh(m,m-n);
	}
	if(n==0){
		return 0;
	}else if(n==1){
		return m;
	}else if(n>1){
		return zh(m-1,n-1)+zh(m-1,n);
	}
}

int main()
{
	int m,n;
	scanf("%d %d",&m,&n);
	int p=zh(m,n);
	printf("%d",p);
	
	return 0;
}
