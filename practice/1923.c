#include <stdio.h>

int main()
{
	double a,b;
	char p;
	while(scanf("%lf%c%lf",&a,&p,&b) != EOF){
		if(p=='c'){
			printf("%.2f\n",a+b);
		}else if(p=='-'){
			printf("%.2f\n",a-b);
		}else if(p=='/'){
			printf("%.2f\n",a/b);
		}else if(p=='*'){
			printf("%.2f\n",a*b);
		}else{
			printf("Unknown operator!\n");
		} 
	}
	return 0;
}
