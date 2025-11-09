#include <stdio.h>

struct date{
	char stnum[10];
	char name[10];
	int a;
	int b;
	int c;
};

struct date all[105];

void input(int n)
{
	int i=0;
	for(i=0;i<n;i++){
		scanf("%s %s %d %d %d",all[i].stnum ,all[i].name,&all[i].a,&all[i].b,&all[i].c);
	}
}

void print(int n)
{
	int i;
	for(i=0;i<n;i++){
		printf("%s,%s,%d,%d,%d\n",all[i].stnum ,all[i].name, all[i].a, all[i].b, all[i].c);
	}
 } 

int main()
{
	
	int n;
	scanf("%d",&n);
	input(n);
	print(n);
	
	
	return 0;
}
