#include <stdio.h>

int main()
{
	int n;
	while (scanf("%d",&n)!=EOF){
		int i,a,s=1;
		for(i=0;i<n;i++){
			scanf("%d",&a);
			if (a%2==1){
				s*=a;
			}
		}
		printf("%d\n",s);
	}
	
	return 0;
}
