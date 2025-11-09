#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	int i;
	int sum = 0;
	for (i=0;i<n;i++){
		int j,a,k;
		for (j=0;j<i+1;j++){
			scanf("%d",&a);
			sum+=a;
		}for (k=0;k<n-i-1;k++){
			scanf("%d",&a);
		}
	}
	printf("%d",sum);
	
	return 0;
}
