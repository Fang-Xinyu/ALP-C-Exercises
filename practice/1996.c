#include <stdio.h>
#include <math.h>
int qm(int i)
{
	int k;
	int sum=1;
	int sq=(int)sqrt(i);
	for (k=2;k<=sq;k++){
		if(i%k==0){
			sum+=k+i/k;
		}
	}
	if(k%sq==0){
		sum-=sq;
	}
	return sum;
}

int main()
{
	int m,n;
	scanf("%d %d",&m,&n);	
	int i;
	int lis[5005]={0};
	for (i=m;i<=n;i++){
		lis[i]=qm(i);
		if(i<lis[i]){
			if(qm(lis[i])==i){
				printf("%d %d\n",i,lis[i]);
			}
		}		
	}


	return 0; 
}


