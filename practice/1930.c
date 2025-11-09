#include<stdio.h>

int gcd(int a,int b)
{
	int c;
	if(a<b){
		c=a;
		a=b;
		b=c;
	}
	while(b!=0){
		c=a%b;
		a=b;
		b=c;
	}
	return a;
}



int main()
{
	int m,n;
	while(scanf("%d %d",&m,&n)!=EOF){
		int g=gcd(m,n);
		int l=m*n/g;
		printf("%d %d\n",g,l);
	}
	
	
	
	return 0;
}
