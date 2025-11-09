#include <stdio.h>

int main()
{
	double sc;
	scanf("%lf",&sc); //²»ÄÜÊÇlf¡¢d 
	if(sc>=90){
		printf("A\n");
	}else if(sc>=80){
		printf("B\n");
	}else if(sc>=70){
		printf("C\n");
	}else if(sc>=60){
		printf("D\n");
	}else{
		printf("E\n");
	}
	
	return 0;
 } 
