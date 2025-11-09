#include <stdio.h>

int main()
{
	int m,d;
	while(scanf("%d/%d",&m,&d)!=EOF){
		if(m==0 &&d==0){
			break;
		}
		if(m==8){
			d+=31; 
		}
		int now=1;
		int count=0;
		int p=2;
		do{
			if(now>=d){
				count++;
			}
			now+=p;
			p++;
		}while(now<=62);
		printf("%d\n",count);
	}
	
	
	
	
	return 0;
}
