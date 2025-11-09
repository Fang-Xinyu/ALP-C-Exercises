#include <stdio.h>

int dir[]={1,2,5,10,20,50,100};

int main()
{
	int n;
	while(scanf("%d",&n)!=EOF){
		if(n==0){
			break;
		}
		int i,j,k,f,m,g,count=0;
		for(i=0;i<=n/100;i++){
			for(j=0;j<=(n-i*100)/50;j++){
				for(k=0;k<=(n-i*100-j*50)/20;k++){
					for(f=0;f<=(n-i*100-j*50-k*20)/10;f++){
						for(m=0;m<=(n-i*100-j*50-k*20-f*10)/5;m++){
							for(g=0;g<=(n-i*100-j*50-k*20-f*10-m*5)/2;g++){
								int d=n-i*100-j*50-k*20-f*10-m*5-g*2;
								if((i+j+k+f+m+g+d)<=100){
									count++;
								}								
							}	
						}						
					}
				}
			}
		}
		printf("%d\n",count);
	}
	
	
	return 0;
}
