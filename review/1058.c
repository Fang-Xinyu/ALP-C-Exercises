#include <stdio.h>

int main()
{
	char s1[100005],s2[100005];
	while(scanf("%s %s",s1,s2)!=EOF){
		if(strcmp(s1,"0")==0&&strcmp(s2,"0")==0){   ////// s1==”0“不行 因为 s1 比的是地址 
			break;
		}
		if(strlen(s1)<strlen(s2)){
			printf("No\n");
			continue;
		}
		int i=0,p=0;
		int len1=strlen(s1);
		int len2=strlen(s2);
		while(i<len1&&p<len2){
			if(s1[i]-'A'+s2[p]-'A'==25){  // 审题 ！！ 相加为25 && 不一定要连续 
				p++;
				i++; 
			}else{
				i++;		
			}
		}
		
		if(i<len1 || i==len1 && p==len2){
			printf("Yes\n");
		}else{
			printf("No\n");
		
		}
	}
	
	
	return 0;
}
