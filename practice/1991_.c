#include <stdio.h>
#include <string.h>

int main()
{
	char str1[10005],str2[10005];
	char output[10005];
	
	int i;
	while(scanf("%s %s",str1,str2)!=EOF){
		int sign=0;
		int p=strlen(str1)-1,q=strlen(str2)-1;
		int j=0;
		while(p>=0 || q>=0 || sign>0){
			int d1= (p>=0)?str1[p]-'0':0;
			int d2= (q>=0)?str2[q]-'0':0;
			output[j]=(d1+d2+sign)%10+'0';
			sign=(d1+d2+sign)/10;
			j++;
			p--;
			q--;
		}
		p=0;
		q=j-1;
		output[j]='\0';
		char temp;
		while(p<q){
			temp=output[p];
			output[p]=output[q];
			output[q]=temp;
			p++;
			q--;
		}
		printf("%s\n",output);
	}
	
	
	return 0;
}
