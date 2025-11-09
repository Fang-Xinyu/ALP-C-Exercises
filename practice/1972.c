#include <stdio.h>

int pow(int a,int b)
{
	int k;
	for(k=0;k<b;k++){
		a=a*16;
	}
	return a;
}

int main()
{
	int lis[85];
	char n;
	int i=0;
	while(scanf("%c",&n)!=EOF){
		if (n=='\n'){
			break;
		}
		if(n>='0'&&n<='9'){
			lis[i]=n-'0';
			i++;
		}else if(n>='a'&&n<='f'){
			lis[i]=n-'a'+10;	
			i++;		
		}
		
	}
	
	i-=1;
	int j=0;
	int sum=0;
	while(i>=0){	
		sum+=pow((int)lis[j],i);
		i--;
		j++;
	}
	
	printf("%d\n",sum);
	
	return 0;
}
