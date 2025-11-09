#include <stdio.h>
#include <math.h>
int main()
{
	int a,b,c;
	while (scanf("%d %d %d",&a,&b,&c) != EOF){
		if (a+b>c && a+c>b && b+c>a){		
			double s,ch,t;	
			ch = a+b+c;
			t = ch/2.0;
			s = sqrt(t*(t-a)*(t-b)*(t-c));	
			printf("%.2f %.2f\n",s,ch);
		}else{
			printf("There sides do not correspond to a valid triangle\n");
		}
		
	}

	return 0; 
}
