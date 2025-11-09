#include <stdio.h>
int main()
{
	float n;
	scanf("%f",&n);
	int i,j;
	for (i=0;i<3;i++){
		for (j=0;j<i;j++){
			printf("%6.2f ",n);
			
		}
		printf("%6.2f\n",n);
	}
	
	
	return 0;
}
