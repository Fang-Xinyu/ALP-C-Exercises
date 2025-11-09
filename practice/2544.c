#include <stdio.h>
int jian(int a,int b)
{
	if(a<b){
		int c=a;
		a=b;
		b=c;
	}
	int k=a%b;
	if(k!=0){
		a=b;
		b=k;
		k=a%b;
	}
	return b;
}


int main()
{
	int a,b,c,d;
	int s1,s2;
	while(scanf("%d/%d * %d/%d",&a,&b,&c,&d)!=EOF){
		s1=a*c;
		s2=b*d;
		
		if(s1%s2==0){
		printf("%d/%d * %d/%d = %d\n",a,b,c,d,s1/s2);
		}else{
			int yue=jian(s1,s2);
		printf("%d/%d * %d/%d = %d/%d\n",a,b,c,d,s1/yue,s2/yue);	
		}

	}	
	return 0;
}
