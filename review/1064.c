#include <stdio.h>
#include <string.h>
int main()
{
	char lis[100005];
	while(gets(lis)){
		int a=0,b=0,c=0,d=0;
		int len=strlen(lis);
		int i;
		for(i=0;i<len;i++){
			if(lis[i]>='A'&&lis[i]<='Z' || lis[i]>='a'&&lis[i]<='z'){
				a++;
			}else if(lis[i]>='0'&&lis[i]<='9'){
				b++;
			}else if(lis[i]==' '){
				c++;
			}else{
				d++;
			}
		}
		printf("%d %d %d %d\n",a,b,c,d);
	}	
	return 0;
}
