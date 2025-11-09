#include <stdio.h>

int main()
{
	int a=100,b=200;
	int i,j,count=0,ct=0;
	int lis[100];
	for (i=a;i<=b;i++){
		int p=1;
		for (j=2;j<i;j++){
			if (i%j==0){
				p=0;
				break;
			}
		}
		if (p==1){
			count++;
			lis[ct]=i;
			ct++;
		}
	}
	printf("%d\n",count);
	for (i=0;i<ct-1;i++){
		printf("%d ",lis[i]);
	}
	printf("%d",lis[ct-1]);

	return 0;
}
