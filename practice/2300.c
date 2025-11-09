#include <stdio.h>

int main()
{
	int n;
	while (scanf("%d",&n) != EOF){
		int i;
		int a[3];
		for (i=0;i<3;i++){
			a[i]=0;
		}
		int sc=0;
		for (i=0;i<n;i++){
			scanf("%d",&sc);
			if (sc>=85){
				a[0]+=1;
			}else if(sc>=60){
				a[1]+=1;
			}else{
				a[2]+=1;
			}
			
		}
		printf(">=85:%d\n",a[0]);
		printf("60-84:%d\n",a[1]);
		printf("<=59:%d\n",a[2]);	
	}	
	return 0; 
}
