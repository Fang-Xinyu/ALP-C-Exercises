#include <stdio.h>

int main()
{
	int m,n;
	scanf("%d %d",&m,&n);
	
	int x[1000],y[1000];
	int i;
	for (i=0;i<m;i++){
		scanf("%d",&x[i]);
	}
	for (i=0;i<n;i++){
		scanf("%d",&y[i]);
	}
	
	int j;
	int dist[1000];
	int dis1,dis2;
	
	for (i=0;i<m;i++){
		j=0;
		while (x[i]>y[j] && j<n-1){
			j++;
		}
			
		if(x[i]>y[j]){
			dis2=x[i]-y[j];
		}else{
			dis2=y[j]-x[i];
		}
		
		dis1=x[i]-y[j-1];
		
		if(dis1<dis2){
			dist[i]=dis1;
		}else{
			dist[i]=dis2;
		}
	}
	
	int dism=dist[0];
	for (i=1;i<m;i++){
		if(dist[i]<dism){
			dism=dist[i];
		}
	}
	
	printf("%d",dism);	

	return 0;
}
