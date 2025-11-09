#include <stdio.h>
#include <string.h>
char str[1005];

void ji(int n,int len)
{
	int temp=str[n-1];
	int i;
	for(i=n-1;i<len-n;i+=n){
		str[i]=str[i+n];
	}
	str[i]=temp;	
}

void ou(int n,int len)//shun
{
	int temp;
	int i;
	for(i=n-1;i<len-n;i+=n){
		temp=str[i+n];
		str[i+n]=str[i];
	}
	str[n-1]=temp;	
}

int main()
{	
	while(gets(str)){
		
		int len=strlen(str);
		int bu=len/2;
		int i;
		for(i=bu;i>=1;i--){
			if(i%2==1){
				ji(i,len);
			}else{
				ou(i,len);
			}
		}
		printf("%s\n",str);
	}
		
	return 0;
}
