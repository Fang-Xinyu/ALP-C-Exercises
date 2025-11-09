#include <stdio.h>

int main()
{
	int x;
	while (scanf("%d",&x) != EOF){
		double y;
		if(x<0){
			y=0;
		}else if(x>=0 && x<=15){
			y=x*4/3.0;
		}else{
			y=2.5*x-10.5;
		}
		
		printf("%.2f\n",y);
	}
	
	return 0;
}
