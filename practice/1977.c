#include <stdio.h>

int main()
{
	int n,i;
	double sum=0,h=100;
	while (scanf("%d",&n)!=EOF){
		for (i=0;i<n;i++){
			sum+=h;
			h=h/2;
			sum+=h;	
		}
		sum-=h;
		printf("共经过%.5f米\n",sum);
		printf("第n次反弹%.5f米\n",h);
	}
	
	
	return 0;
 } 
