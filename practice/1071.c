#include <stdio.h>

int main()
{
	int y,m,d;
	while(scanf("%d-%d-%d",&y,&m,&d) !=EOF){
		int md[12]={31,28,31,30,31,30,31,31,30,31,30,31};
		
		int i,da,sum=0;
		for (i=0;i<m-1;i++){
			da = md[i];
			sum+=da;
		}
		sum+=d;
		
		if (m>=3 && ((y%4==0 && y%100!=0) || y%400==0)){
			sum+=1;
		}
		printf("%d\n",sum); 
	}
	return 0;
}
