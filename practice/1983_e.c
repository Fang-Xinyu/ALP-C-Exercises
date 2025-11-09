#include <stdio.h>

int main()
{
	int a[11]={1,4,6,9,13,16,19,28,40,100};
	int n;
	scanf("%d",&n);
	int i=0;
	while(n>a[i] &&i<10){
		i++; 
	}
	int j;
	for (j=10;j>i;j--){
		a[j]=a[j-1];
	}
	a[i]=n;
	
	for (i=0;i<10;i++){
		printf("%d\n",a[i]);
	}
	printf("%d",a[10]);

	return 0;
}
