#include <stdio.h>

struct student{
	int sc;
	int num;
};

int main()
{
	struct student lis[10]={0,0,0,1,0,2,0,3,0,4,0,5,0,6,0,7,0,8,0,9};
	int i;
	for(i=0;i<10;i++){
		scanf("%d",&lis[i].sc);
	}
	int max=lis[0].sc;
	for(i=0;i<10;i++){
		if(max<lis[i].sc){
			max=lis[i].sc;
		}
	}
	
	for(i=0;i<10;i++){
		if(max==lis[i].sc){
			printf("%d\n",lis[i].num);
		}
	}
	
	return 0;
}
