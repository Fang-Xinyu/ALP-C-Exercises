#include <stdio.h>

int main()
{
	long n,r;
	int lis[35];
	while(scanf("%ld %ld",&n,&r)!=EOF){
		int p=0;
		int sign=1;
		if(n<0){
			sign=-1;
			n=-n;
		}
		
		while(n>0){
			if(n%r<10){
				lis[p]=n%r;
			}else{
				lis[p]=(n%r)-10+'A';
			}
			n=n/r;
			p++;
		}
		if(sign==-1){
			printf("-");
		}
		int i;
		for(i=p-1;i>=0;i--){
			if(lis[i]<10){    //为什么isdigit输出为乱码 
				printf("%d",lis[i]);
			}else{
				printf("%c",(char)lis[i]);
			}
			
		}
		printf("\n");
		
		
	}

	return 0;
}
