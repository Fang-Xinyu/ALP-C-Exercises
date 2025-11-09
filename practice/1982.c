#include <stdio.h>

int main()
{
	int n,m;
	scanf("%d,%d",&n,&m);
	int i,j;
	
	float lis[n+1][2];
	for (i=0;i<n;i++){
		lis[i][0]=0.0;
		lis[i][1]=-1.0;
	}
	
	int head=-1;
	
	for (i=0;i<n;i++){
		float max=0,min=10,a=0,sum=0;
		for (j=0;j<m;j++){
			scanf("%f",&a);
			if(a>max){
				max=a;
			}
			if(a<min){
				min=a;
			}
			sum+=a;	
			
		}
		lis[i][0]=(sum-max-min)/(m-2);
		
		int p=head;	
		int q=-1;
		while(lis[p][0]>lis[i][0] && p!=-1){
			q=p;
			p=lis[p][1];
		}
		if (p!=head){
			lis[i][1]=p;
			lis[q][1]=i;
		}else{
			lis[i][1]=head;
			head=i;
		}
	} 
	
	int k=head;
	for (i=0;i<n;i++){
		int mc=i+1;
		printf("第%d名:%d号选手,得分%.2f\n",mc,k+1,lis[k][0]);
		k=lis[k][1];
	}

	return 0;
}
