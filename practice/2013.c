#include <stdio.h>

int main(void)
{
	int n,lis[55];
	scanf("%d",&n);
	int i;
	int count=0;
	int l,len=0,max_l;
	for (i=0;i<n;i++){
		scanf("%d",&lis[i]);
		if(i==0){
			continue;
		}
		if(lis[i]==lis[i-1]){
			if (count==0){
				l=i-1;
			}
			count++;
		}else if(count!=0){
			if(count>len){
				len=count;
				max_l=l;
				count=0;
			}
		}	
	}
	if(len!=0){
		printf("The longest equal number list is from %d to %d.\n",max_l,max_l+len);
	}else{
		printf("No equal number list.");
	}
	
	
	
	return 0;
 } 
