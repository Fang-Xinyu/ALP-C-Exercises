#include <stdio.h>

int main()
{
	int n,m;
	while (scanf("%d %d",&n,&m) != EOF){
		if (n==0 && m==0){
			break;
		}
		
		int p=0;
		double i,r; 
		
		r=m/2.0-n;
		
		if (r==(int)r && r>=0 &&r<=n){
			int i=n-(int)r;
			printf("%d %d\n",i,(int)r); 
		}
		else {
			printf("Error\n");
		}
	}
	
	
	return 0;
 } 
