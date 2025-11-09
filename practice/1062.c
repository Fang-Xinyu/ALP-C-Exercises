#include <stdio.h>

int main()
{
	int n;
	while (scanf("%d",&n)!=EOF){
		int i,s=1;
		for (i=1;i<n;i++){
			s=(s+1)*2;
		} 
		printf("%d\n",s);
	}
	
	return 0;
}
