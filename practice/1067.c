#include <stdio.h>

int main()
{
	int n;
	char k;
	
	while (scanf("%d",&n) != EOF){
		if (n>100 || n<0){
			printf("Score is error!\n");
		}else if (n>=90){
			k = 'A';
			printf("%c\n",k);
		}else if (n>=80){
			k = 'B';
			printf("%c\n",k);
		}else if (n>=70){
			k = 'C';
			printf("%c\n",k);
		}else if (n>=60){
			k = 'D';
			printf("%c\n",k);
		}else{
			k = 'E';
			printf("%c\n",k);
		}
		
	}
	
	return 0; 
}
