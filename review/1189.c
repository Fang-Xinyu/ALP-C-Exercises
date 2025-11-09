#include <stdio.h>  //°ëÊı¼¯ 

int main()
{
	int i,j;   //Ô¤¼ÆËã 
	int lis[202]={0,1};
	for(i=2;i<=201;i++){
		lis[i]+=1;
		for(j=1;j<=i/2;j++){
			lis[i]+=lis[j];
		}
	}
	
	int n;
	while(scanf("%d",&n)!=EOF){
		printf("%d\n",lis[n]);
	}
	
	return 0;
}
