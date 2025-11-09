#include <stdio.h>

long long max_y(long long a,long long b)
{
	if(a<b){
		long long temp=a;
		a=b;
		b=temp;
	}
	long long p=a%b;
	while(p!=0){
		a=b;
		b=p;
		p=a%b;
	}
	return b;
	
}

long long find(long long a,long long b)
{
	long long k=a;	
	if(max_y(a,b)!=b){
		k=a/max_y(a,b)*b;
	}
	return k;
}

int main()
{
	int n;
	while(scanf("%d",&n)!=EOF){
		int i;
		long long lis[100];		
		for(i=0;i<n;i++){
			scanf("%lld",&lis[i]); // lld !
		}
		long long k=lis[0];
		for(i=1;i<n;i++){
			k=find(k,lis[i]);
		}
		printf("%lld\n",k);
	}
	
	return 0;
}
