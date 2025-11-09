#include <stdio.h>

//正确 
//不能用strcpy 因为这里用的不是指针 
//所以只能单个赋值 

int main()
{
	char str[1005];
	char output[3005];
	while(gets(str)!= NULL){
		int i=0,j=0;
		
		while(i<strlen(str)){
			if (i<strlen(str)-1&&str[i]=='w'&&str[i+1]=='e'){
				output[j++] = 'y';
                output[j++] = 'o';
                output[j++] = 'u';			
				i+=2;				
			}else{
				output[j]=str[i];
				i++;
				j++;
			}
		}
		output[j]='\0';
		printf("%s\n",output);
		
	} 	
	return 0;
}
