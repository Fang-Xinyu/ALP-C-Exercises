#include <stdio.h>

double min(int a,double b)
{
	if(a<b){
		return a;
	}else{
		return b;
	}	
}

int main()
{
	int m,n;
	while(scanf("%d %d",&m,&n)!=EOF){
		if (m==0&&n==0){
			break;
		}
		int i;
		int head=-1;
		int p;
		double lis[25][3];
		for (i=0;i<20;i++){
			lis[i][2]=-1;
		}
		int j;
		for (j=0;j<m;j++){
			int all;
			scanf("%lf %d",&lis[j][0],&all);
			if (lis[j][0]!=0){
				lis[j][1]=all*1.0/lis[j][0];
			}else{
				lis[j][1]=all;
			}
						
			p=head;
			int q=-1;
			while(p!=-1 && lis[p][1]>lis[j][1]){
				q=p;
				p=lis[p][2];
				
			}
			if (p!=head){
				lis[j][2]=p;
				lis[q][2]=j;
			}else{
				lis[j][2]=head;
				head=j;
			}		
		}
		p=head;
		double sum=0;
		while(n>0 && p!=-1){
			if(lis[p][0]!=0){
				sum+=lis[p][1]*min(n,lis[p][0]);
			}else{
				sum+=lis[p][1];
			}
			n-=min(n,lis[p][0]);
			p=lis[p][2];
		}			
		printf("%.2f\n",sum);	
	}

	return 0;
}

