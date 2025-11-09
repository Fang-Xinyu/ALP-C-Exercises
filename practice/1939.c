#include <stdio.h>

int main()
{
	int a;
	while (scanf("%d",&a) != EOF){
		int min,max;
		if (a%2!=0){
			min=0;
			max=0;
		}else{
			max=a/2;
			if (a%4==0){
				min=a/4;
			}else{
				min=a/4+1;
			}
		}
		printf("%d %d\n",min,max);
	}

	return 0; 
}
