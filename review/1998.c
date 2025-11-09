#include <stdio.h>

int main()
{
	char lis[1005]={0};
	int n;
	scanf("%d",&n);
	lis[n]='\0';
	int count=n;
	int p=0;
	int sign=0;
	while(count>1){
		if(lis[p]==0){
			sign++;
			if(sign==4){
				lis[p]=1;
				sign=0;
				count--;
			}
		}
		p=(p+1)%n;	
	}
	char *z=strchr(lis,0);  // !!!!!
	int q=z-lis;
	printf("%d",q+1);
	
	return 0;
}

