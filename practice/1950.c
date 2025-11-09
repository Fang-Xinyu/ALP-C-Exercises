#include <stdio.h>

int main()
{
	int y,m,d;
	while (scanf("%d %d %d",&y,&m,&d) != EOF){
		int p=0;
		
		if(y%4==0 && y%100!=0 || y%400==0){
			p=1;
		}
		int s=0;
		int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
		int i;
		for (i=0;i<m-1;i++){
			s+=a[i];
		}
		s+=d;
			
		if (m>=3 && p==1){
			s+=1;
		}
		printf("%d\n",s);
		
	}
	
	return 0;
}
