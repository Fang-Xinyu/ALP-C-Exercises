#include <stdio.h>

int main()
{
	int t1,t2;
	scanf("%d %d",&t1,&t2);
	
	int h,m;
	h=t2/100-t1/100;
	m=t2%100-t1%100;
	
	if(m<0){
		h-=1;
		m+=60;
	}
	
	printf("%d hrs %d mins",h,m);

	return 0;
}
