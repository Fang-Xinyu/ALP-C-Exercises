#include <stdio.h>

int main()
{
	int a;
	while (scanf("%d",&a)!=EOF){
		float s=0;
		int n=0;
		while (s<=a){
			n+=1;
			s+=1.0/n;
		}
			
		printf("s=%.4f,n=%d\n",s,n);		
	}
	
	return 0;
}
