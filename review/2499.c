#include <stdio.h>
int lis[105];
char str[105];

void ni(int n,int p)
{
	int sum=0;
	int count=0;
	while(n!=0||count<7){
		sum=sum*2+n%2;
		n/=2;
		count++;
	}
	str[p]=sum;
	printf("%c",str[p]);
}

int main()
{
	
	
	int i=0;
	while(scanf("%d",&lis[i])!=EOF){
		if(lis[i]==0){
			break;
		}
		i++;
	}
	int len=i;
	for(i=0;i<len;i++){
		ni(lis[i],i);
	}
	
	
	
	return 0;
 } 
