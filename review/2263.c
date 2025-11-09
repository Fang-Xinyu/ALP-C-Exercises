#include <stdio.h>
#define PI 4         //Õæ¼Ù£¿£¿£¿ 

int main()
{
	double r,v1,v2;
		while(scanf("%lf %lf %lf",&r,&v1,&v2)!=EOF){
			double t1,t2;
			t1=r/v1;
			t2=r*PI/v2;
			if(t1>t2){
				printf("No\n");
			}else{
				printf("Yes\n");
			}
		}
	
	return 0;
}


//3000 30 100 y
//1000 10 40 y

//100 3000*3.14/100 93 no
//100 
