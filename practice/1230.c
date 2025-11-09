#include <stdio.h>

int main()
{
	int n;
	
	while (scanf("%d",&n)!=EOF){
		int i,a;
		int max_count=0,max_a=0; 
		
		for (i=0;i<n;i++){
			scanf("%d",&a);	
			
			int j,count=0;
			for (j=1;j<a+1;j++){
				if (a%j==0){
					count++;
				}
			}
			
			if(count>max_count){
				max_count=count;
				max_a=a;
			}else if(count==max_count){
				if (a<max_a){
					max_a=a;
				}
			}
									
		}	
		printf("%d\n",max_a);	
		
	}
	
	return 0;
}




