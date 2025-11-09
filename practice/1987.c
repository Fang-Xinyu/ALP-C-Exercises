#include <stdio.h>

int main()
{
	int m;
	scanf("%d",&m);
	int i,j;
	
	double lis[6][6];
	
	for(i=0;i<m;i++){
		for(j=0;j<m;j++){
			scanf("%lf",&lis[i][j]);
		}
	}
	
	for(i=0;i<m;i++){
		double k=lis[i][i];
		for(j=0;j<m;j++){
			lis[i][j]=lis[i][j]/k;
		}
	}
	
	for(i=0;i<m;i++){
		for(j=0;j<m-1;j++){
			printf("%.2f ",lis[i][j]);
		}
		printf("%.2f\n",lis[i][m-1]);
	}
	
	
	return 0;
}
