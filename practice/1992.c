#include <stdio.h>

int is_pr(int i)
{
	int sum=0;
	int p=i;
	while(p>0){
		sum=sum*10+p%10;
		p=p/10;
	}
//	printf("%d %d\n",sum,i);
	if(sum==i){
		return 1;
	}else{
		return 0;
	}
	
}


int is_su(int i){
	int j;
	for(j=2;j<i;j++){
		if(i%j==0){
			return 0;
		}
	}
	return 1;
}


int main()
{
	int m,n;
	scanf("%d %d",&m,&n);
	int lis[10000]={0};
	
	int k=0;
	int i;
	for (i=m;i<=n;i++){
		if (is_pr(i)==1){
			if(is_su(i)==1){
				lis[k]=i;
				k++;
			}
		}
	}
	for (i=0;i<k;i++){
		printf("%6d",lis[i]);
		if (i%5==4){
			printf("\n");
		}
	}
	
	
	return 0;
 } 
