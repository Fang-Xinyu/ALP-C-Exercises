#include <stdio.h>

struct st{
	char name[25];
	char sex[10];
	int year;
	int mon;
	int day;
};

int main()
{
	struct st lis[35];
	int count=0;
	char op[10];
	int i;
	while(1){
		scanf("%s",op);
		if(strcmp(op,"add")==0){
			scanf("%s %s %d %d %d",lis[count].name ,lis[count].sex ,&lis[count].year ,&lis[count].mon ,&lis[count].day );
			count++;
		}else if(strcmp(op,"name")==0){
			char m[25];
			scanf("%s",m);
			for(i=0;i<count;i++){
				if(strcmp(m,lis[i].name )==0){
					printf("%s %s %d-%d-%d\n",lis[i].name ,lis[i].sex ,lis[i].year ,lis[i].mon ,lis[i].day );
				}
			}
		}else if(strcmp(op,"sex")==0){
			char m[25];
			scanf("%s",m);
			for(i=0;i<count;i++){
				if(strcmp(m,lis[i].sex )==0){
					printf("%s %s %d-%d-%d\n",lis[i].name ,lis[i].sex ,lis[i].year ,lis[i].mon ,lis[i].day );
				}
			}
		}else if(strcmp(op,"quit")==0){
			break;
		}
		getchar();
	}
	
	
	return 0;
}
