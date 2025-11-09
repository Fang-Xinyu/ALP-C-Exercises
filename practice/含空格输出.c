#include <stdio.h>

int main()
{
	int n;
	while (scanf("%d",&n) != EOF){
		int a[n];
		int i;
		for (i=1;i<=n;i++){
			a[i-1]=(5-i)*" ";
			int j;
			for (j=1;j<i+1;j++){
				a[i-1]+=()j;
				
			}
		}
		
		
		printf("%s\n",a[i]) ;
		
	}

	return 0; 
}
