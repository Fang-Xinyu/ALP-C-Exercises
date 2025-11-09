#include <stdio.h>

int main()
{
	int h,m,s; 
	while(scanf("%d:%d:%d",&h,&m,&s)!=EOF){
		int time1=h*60*60+m*60+s;
		scanf("%d:%d:%d",&h,&m,&s);
		int time2=h*60*60+m*60+s;
		if (time1>time2) {
			int k=time1;
			time1=time2;
			time2=k;		
		}
		int dt=time2-time1;
		h=dt/3600;
		dt=dt%3600;
		m=dt/60;
		s=dt%60;
		printf("%d:",h);
		if (m<10){
			printf("0%d:",m);
		}else{
			printf("%d:",m);
		}
		
		if (s<10){
			printf("0%d\n",s);
		}else{
			printf("%d\n",s);
		}

	}

	return 0;	
}
