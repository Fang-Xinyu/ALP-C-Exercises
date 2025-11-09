# include <stdio.h>

int main()
{
	int n,count;
	while (scanf("%d",&n) != EOF){
		if (n==0){
			break;
		}
			
		int m[n],i;
		m[1]=1;
		m[2]=2;
		
		if (n>=3){
			for (i=3;i<n+1;i++){
				m[i]=m[i-1]+m[i-2];
			}
		}
		printf("%d\n",m[n]);
	}
    
	return 0;
}
