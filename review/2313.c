#include <stdio.h>
int max_n;
int max_count;
int q;
int dic[10][2];

int find(int n)
{
	int i;
	for(i=0;i<q;i++){
		if(dic[i][1]==n){
			return i;
		}
	}
	return -1;
 } 

void Num(int a[])
{
	int i;
	for(i=0;i<10;i++){
		int p=find(a[i]);
		if(p!=-1){
			dic[p][0]++;
		}else{
			dic[q][0]=1;
			dic[q][1]=a[i];
			q++;
		}
	}
	max_n=dic[0][1];
	max_count=dic[0][0];
	for(i=1;i<q;i++){
		if(dic[i][0]>max_count){
			max_count=dic[i][0];
			max_n=dic[i][1];
		}
	}
}

int main()
{
	int i;
	int s[10];
	for(i=0;i<10;i++){
		scanf("%d",&s[i]);
	}
	
	Num(s);
	printf("%d\n",max_n);
	printf("%d\n",max_count);
	
	return 0;
}
