#include <stdio.h>

int main()
{
	int a,n;
	while (scanf("%d %d",&a,&n) != EOF){
		int i;
		int k=0,s=0;
		for (i=0;i<n;i++){
			k=k*10+a;
			s+=k;
		}
		printf("%d\n",s);
			
	}	
	return 0; 
}
