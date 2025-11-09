#include <stdio.h>

int main()
{
	int m,n;
	int x[1005],y[1005];
	int lis[2005];
	int i;
	scanf("%d %d",&m,&n);
	for(i=0;i<m;i++){
		scanf("%d",&x[i]);
	}	
	for(i=0;i<n;i++){
		scanf("%d",&y[i]);
	}
	int p=0,q=0;
	int min=x[0]>y[0]?(x[0]-y[0]) : (y[0]-x[0]);
	while(p<m&&q<n){
		if(x[p]>y[q]){
			lis[p*2]=x[p]-y[q];
			if(lis[p*2]<min){
				min=lis[p*2];
			}
			q++;
		}else if(x[p]==y[q]){
			min=0;
			break;
		}else{
			lis[p*2+1]=y[q]-x[p];
			if(lis[p*2+1]<min){
				min=lis[p*2+1];
			}
			p++;
		}
	}
	printf("%d\n",min);
	
	return 0;
}
