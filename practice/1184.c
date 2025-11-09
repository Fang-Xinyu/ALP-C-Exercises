#include <stdio.h>

int main()
{
	int bei,yue;
	int s1,s2,k;
	
	scanf("%d %d",&s1,&s2);
	
	int a=s1,b=s2;
	if (a<b){
		k=a;
		a=b;
		b=k;
	}
	yue=a%b;
	while(yue!=0){
		a=b;
		b=yue;
		yue=a%b;
	}
	yue=b;
	
	bei=s1*s2/yue;
	
	printf("%d %d",bei,yue);
	
	return 0;
}
