#include <stdio.h>

int main()
{
	int n;
	while(scanf("%d",&n)!=EOF){
		if(n==0){
			break;
		} 
		int lis[105][3];
		int i,k;
		int head=-1;
		for (i=0;i<n;i++){
			scanf("%d",&lis[i][0]);
			lis[i][1]=-1;
			k=lis[i][0];
			if (k<0){
				k=-k;
			}
			lis[i][2]=k;

			int p=head;
			int q=p;	

			if (k>lis[head][2] || head==-1){
				lis[i][1]=head;
				head=i;
			}else{
				while(lis[p][2]>k && p!=-1){
					q=p;
					p=lis[p][1];
				}
				lis[i][1]=p;
				lis[q][1]=i;
				
			}

		}
		int q=head;
		while(lis[q][1]!=-1){
			printf("%d ",lis[q][0]);
			q=lis[q][1];	
		}
		
		printf("%d\n",lis[q][0]);
		
	}
	
	
	return 0;
 } 
