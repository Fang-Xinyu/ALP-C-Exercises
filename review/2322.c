#include <stdio.h>

int main()
{
	char tp;
	int i;
	while(scanf("%c",&tp)!=EOF){
		if(tp=='B'){
			char lis[9];
			scanf("%s",lis);
			int sum=0;
			for(i=0;i<8;i++){
				sum=sum*2+(lis[i]-'0');
			}
			printf("%d\n",sum);
		}else{
			char lis[9];
			int n;
			lis[8]='\0';
			scanf("%d",&n); //读取 
			for(i=7;i>=0;i--){
				lis[i]='0'+n%2; //（char)代表ascll码为0 1 的值 ，不能用 
				n=n/2;
			}
			printf("%s\n",lis);
		}
		getchar(); //看提示 
	}
	
	
	return 0;
}
