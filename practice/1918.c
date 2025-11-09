#include <stdio.h>
int main()
{
	int n;
	while (scanf("%d",&n)!=EOF){
 		int a[4];
 		int i;
 		for (i=0;i<4;i++){
 			a[3-i]=((n%10)+9)%10;
 			n=n/10;
		 }
		printf("%d%d%d%d\n",a[2],a[3],a[0],a[1]);
		
	}
	
	return 0;
}
