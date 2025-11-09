#include <stdio.h>

int main()
{
	int m,d,day=31;

	while (scanf("%d/%d",&m,&d) != EOF){
		if (m==0 && d==0){
			break;
		} 
		if (m==8){
			d+=day;
		}
		int p,t=2,count=0;
		for (p=1;p<=day*2;t++){
			if (p>=d && p<=day*2){
				count++;
			}
			p+=t;
		}
		printf("%d\n",count);
	}
	
	return 0;
}
