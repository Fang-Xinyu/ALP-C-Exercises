#include <stdio.h> //不用复习
int ct(int n)
{
	int count=0;
	int i;
	for(i=1;i<=n;i++){
		if(n%i==0){
			count++;
		}
	}	
	return count;
}

int main()
{
	int n;
	while(scanf("%d",&n)!=EOF){
		int i,m;
		int max_ms=205;
		int max_count=0;
		for (i=0;i<n;i++){
			scanf("%d",&m);
			int count=ct(m);
			if(count>max_count){ // > 和 = 分开写 
				max_count=count;
				max_ms=m;				
			}else if(count==max_count&&m<max_ms){
				max_ms=m;
			}			
		}
		printf("%d\n",max_ms); 	
	} 

	return 0;
}
