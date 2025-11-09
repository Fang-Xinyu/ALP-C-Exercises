#include <stdio.h>

int main()
{
	int a[5]={0};
	int min,max;
	scanf("%d %d %d %d",&a[1],&a[2],&a[3],&a[4]);
	max=a[4]*4;
	int lis[1000]={0};
	
	int count=0;
	int i;
	for (i=0;i<5*5*5*5*5;i++){
		int t=i;
		int sum=0;
		int j;
		for (j=0;j<5;j++){
			int k=t%5;
			sum+=a[k];
			t=t/5;
		}

		if(lis[sum]==0){
			count++;
			lis[sum]=1;
		}		
	}
	int p=count-1;
	for (i=1;i<count;i++){
		if(lis[i]==0){
			p=i-1;
			break;
		}
	}
	
	printf("%d",p);
	
	return 0;
}
