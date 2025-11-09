#include <stdio.h>
#include <string.h>

int output[1000][6];


int lis[6]={0};//dangqian
int dic[7]={0};//yiyou
int count=0;
	
int is_dif(int lis[],int n)
{
	int i;
	for (i=0;i<n;i++){
		if(lis[i]==i+1){
			return 0;
		}
	}
	return 1;
}

void all(int p,int n)
{
	
	if(p==n){
		if(is_dif(lis,n)==1){
			int i;
			for(i=0;i<n;i++){
				output[count][i]=lis[i];///////不是字符串 
			}
			count++;
		}
		return;
	}
	
	int i;
	for(i=1;i<=n;i++){//i->数字 
		if(dic[i]==0){
			dic[i]=1;
			lis[p]=i;
			all(p+1,n);//////p+1 不能p++; all(p,n) 
			dic[i]=0; ///////改为未使用 不要改lis[p]  
		}
	}
}

int main()
{
	int n;
	scanf("%d",&n);
	int p=0;
	all(p,n);
	
	int i,j;
	for(i=0;i<count;i++){
		for(j=0;j<n;j++){
			printf("%d",output[i][j]);
		}
		if(i%5==4){
			printf("\n");
		}else{
			printf(" ");
		}
	}
	printf("\ns=%d",count);
	
	
	return 0;
 } 
