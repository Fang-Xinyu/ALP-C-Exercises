#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int n;
	while(scanf("%d",&n)!=EOF){
		char *lis=(char *)malloc( (n+1)*sizeof(char) );
		memset(lis,0,n);
		lis[n]='\0';
		int count=n;
		int p=0;
		int sign=0;
		while(count>1){
			if(lis[p]==0){
				sign++;				
				if(sign==3){
					lis[p]=1;
					
					sign=0;
					count--;
				}								
			}
			p=(p+1)%n;
			
		}
		
		//ÕÒµ½Ë÷Òý 
		char *q=strchr(lis,0);
		int k=q-lis;
		printf("%d\n",k+1);
		free(lis); //ÊÍ·Å 
	}
	
	
	return 0;
}
