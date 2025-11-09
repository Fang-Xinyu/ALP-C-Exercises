#include <stdio.h>

int main()
{
	int m,d;
	while(scanf("%d/%d",&m,&d)!=EOF){
		if(m==0 && d==0){
			break;
		}
		if(m==8){
			d+=31;
		} 
		int now=1;
		int len=2,count=0;
		while(now<=62){
			if(now>=d){
				count++;
			}
			now+=len;
			len++;
		}
		printf("%d\n",count);
	}
	
	
	return 0;
}
