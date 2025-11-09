#include <stdio.h>

int main()
{
	int i;
	char a;
	int shu=0,yw=0,kg=0,ot;
	for (i=0;i<20;i++){
		a=getchar();
		if (a>='0'&&a<='9'){
			shu+=1;
		}else if (a>='a'&&a<='z'||a>='A'&&a<='Z'){
			yw+=1;
		}else if(a==' '||a=='\n'){
			kg+=1;
		}
		ot=20-shu-yw-kg;
	}
	printf("%d个英文字母\n",yw);
	printf("%d个数字字符\n",shu);
	printf("%d个空格或回车\n",kg);
	printf("%d个其他字符\n",ot);
	
	return 0;
}
