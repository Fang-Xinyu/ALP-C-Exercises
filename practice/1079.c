#include <stdio.h>

int main()
{
	int a,b,c,d;
	scanf("%d %d",&a,&b);
	while ((scanf("%d %d",&c,&d) != EOF)){
		printf("%d\n",a+b);
		if (c==0 && d==0){
			break;
		}
		printf("\n");
		a=c;
		b=d;
	}
	return 0;
}
