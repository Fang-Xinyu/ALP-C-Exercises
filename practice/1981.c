#include <stdio.h>

int main()
{
	int m;
	scanf("%d",&m);
	int lis[6][6];
	int i,j;
	int max[6][2];
		
	for (i=0;i<m;i++){
		for (j=0;j<m;j++){
			scanf("%d",&lis[i][j]);
			
			if(j==0){
				max[i][0]=lis[i][j];
				max[i][1]=0;
			}
		}
	}
	
	for (i=0;i<m;i++){
		for (j=1;j<m;j++){
			if(lis[i][j]>=max[i][0]){
				max[i][0]=lis[i][j];
				max[i][1]=j;
			}			
		}
	}
	
	int p[6]={1,1,1,1,1,1,};
	for(i=0;i<m;i++){
		int min=max[i][0];
		for (j=0;j<m;j++){
			if(lis[j][max[i][1]]<min || (lis[j][max[i][1]]==min&&j!=i)){
				p[i]=0;
			}
		}
		
	}
	int sign=0;
	for (i=0;i<m;i++){
		if(p[i]==1){
			sign=1;
			printf("%d %d",i,max[i][1]);
			break;
		}
	}
	if(sign==0){
		printf("NO");
	}
	
	
	
	return 0;
}
