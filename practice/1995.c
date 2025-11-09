#include <stdio.h>

void findshort(char s1[],char s2[])
{
	int count=0;
	int min=10000;
	int min_i=-1;
	int i;
	for (i=0;s1[i]!='\0'&&s1!='\n';i++){
		if(s1[i]!=' '){
			count++;
		}else{
			if(count<min && count!=0){
				min=count;
				min_i=i-count;
			}
			count=0;
		}
	}
	if(count<min){
		min=count;
		min_i=i-count;
	}
	int j=0;
	for (i=min_i;i<min_i+min;i++){
		s2[j]=s1[i];
		j++;
	}
	s2[j]='\0';
}

int main()
{
	char s1[10000];
	char s2[10000];
	
	gets(s1);

	findshort(s1,s2);
	printf("%s",s2);
	
	return 0;
}
