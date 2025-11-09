#include <stdio.h>
#include <math.h>

int main()
{
	int a,b;
	scanf("%d,%d",&a,&b);
	
	int i,j;
	for (i=a;i<=b;i++){
		for (j=i;j<=b;j++){
			int k = sqrt(i*i + j*j);			
			if( k*k == i*i + j*j && k>=a && k<=b){	
				printf("%d^2+%d^2=%d^2\n",i,j,k);
			}
			
		}
	}

	return 0;
}
