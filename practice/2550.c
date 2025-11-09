#include <stdio.h>
#include <math.h>

int is_su(int n)
{
	int k=(int)sqrt(n);
	int i;
	for(i=2;i<=k+1;i++){
		if(n%i==0){
			return 0;
		}
	}
	return 1;	
}

int main()
{
	int n;
	int sulis[100]={2},p=1;
	int i;
	for (i=3;i<100;i++){
		if(is_su(i)){
			sulis[p++]=i;
		}
	}

	while( scanf("%d",&n)!=EOF ){
		int q;
		int dic[105]={0};
		int max=0;
		for(q=1;q<=n;q++){  //不要乘起来，会很大，直接用1,2,3……n 
			int sum=q;
			int i=0;
			while(sum>1){
				if(sum%sulis[i]==0){
					dic[i]+=1;
					sum=sum/sulis[i];
				}else{
					i++;
				}
			}
			if(i>max){
				max=i;
			}			
		} 

		printf("%d!=",n);
		int j;
		for(j=0;j<max+1;j++){
			printf(" %d",dic[j]);
		}
		printf("\n");	
	}
	
	return 0;
}
