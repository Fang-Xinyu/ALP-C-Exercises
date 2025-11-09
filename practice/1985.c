#include <stdio.h>

int is_p(int n)
{
	int i;
	int k=(int)sqrt(n);
	if (n==1){
		return 0;
	}else if(n==2){
		return 1;
	}
	for (i=2;i<=k;i++){
		if(n%i==0){
			return 0;
		}
	}
	return 1;
}

void num(int m, int k,int xx[])
{
	int i=m+1,count=0;
	while(count<k){
		if(is_p(i)==1){
			xx[count]=i;
			count++;
		}
		i++;
	}
}

int main()
{
	int m,k;
	scanf("%d %d",&m,&k);
	int xx[10000];
	num(m,k,xx);
	
	int i;
	for (i=0;i<k;i++){
		printf("%d\n",xx[i]);
	}

	return 0;
}
