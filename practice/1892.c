#include <stdio.h>

int main()
{
	int n;
	while (scanf("%d",&n) != EOF){
		int i,a,s=0;
		for (i=0;i<3;i++){
			a=n%10;
			n=n/10;
			if (a%2==0){
				s+=a;
			}
		}
		printf("%d\n",s);
	}
	
	return 0; 
}
