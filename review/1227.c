#include <stdio.h> // 24Ð¡Ê±ÖÆ 

int main()
{
	int t,k;
	scanf("%d",&t);
	for(k=0;k<t;k++){
		int h,m,s;
		scanf("%d %d %d",&h,&m,&s);
		float dt1=h%12*30+m*30.0/60+s*0.5/60;
		float dt2=m*360/60+s*6.0/60;
		float dt=dt1>dt2?(dt1-dt2):(dt2-dt1);
		
		while(dt>180){
			dt=360-dt;
		}
		int d=(int)dt;
		printf("%d\n",d);
	}
	
	return 0;
 } 
