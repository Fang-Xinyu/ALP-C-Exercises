#include <stdio.h>

int ni(int s)
{
	int i=0;
	while(s>0){
		i=i*10+s%10;
		s=s/10;
	}
	return i;
	
}

int is_hui(int s)
{
	if(ni(s)==s){
		return 1;
	}else{
		return 0;
	}	
}

int main()
{
	int x1,x2;
	scanf("%d %d",&x1,&x2);
	
	int n;
	for (n=x1;n<=x2;n++){
		int count=0;
		int s=n;
		
		while(is_hui(s)==0 && count<=15){
			count++;	
			s+=ni(s);
		}
		
		if(count==16 && is_hui(s)==0){
			printf("%d(?):\n",n);
		}else{
			printf("%d(%d):%d\n",n,count,s);			
		}
		
	}
	
	
	
	return 0;
}
