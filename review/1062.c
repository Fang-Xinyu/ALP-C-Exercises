#include <stdio.h>

int main()
{
	int n;
	while(scanf("%d",&n)!=EOF){
		int x=1;
		int i;
		for(i=0;i<n-1;i++){
			x=(x+1)*2;
		} 
		printf("%d\n",x); 
	}

	return 0;
}
