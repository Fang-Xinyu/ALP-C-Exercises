#include <stdio.h>

int main()
{
	int n;
	while (scanf("%d",&n)!=EOF){
		int k=n/10;
		
		int i;
		for (i=0;i<k;i++){
			if (i!=7 && i!=4){
				printf("%d\n",i*10+7); 
			}else if(i==4){
				printf("%d\n",i*10+7); 
				printf("%d\n",49); 
			}else{
				int j;
				for (j=0;j<=9;j++){
					printf("%d\n",70+j);
				}	
			}			
		} 
		
	}

	return 0;
}
