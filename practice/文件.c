#include <stdio.h>

int main()
{
	FILE *fp =fopen("in.txt","r");
	if (fp){
		int num;
		fscanf(fp,"%d",&num);
		printf("%d\n",num);
		fclose(fp);
	}else{
		printf("fail\n");
	}
	
	return 0;
}


