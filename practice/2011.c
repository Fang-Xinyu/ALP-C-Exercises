#include <stdio.h>
#include <string.h>

int main()
{
	char input[105],output[105];
	int sign[255]={0}; 
	fgets(input,sizeof(input),stdin);
	
	int len=strlen(input);
	int i;
	int j=0;
	for (i=0;i<len;i++){
		if (sign[input[i]]==0){
			output[j]=input[i];
			sign[input[i]]=1;
			j++;
		}
	}
	output[j]='\0';
	printf("%s",output);

	return 0;
}
