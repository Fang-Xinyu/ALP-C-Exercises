#include <stdio.h>
#include <string.h>
int main()
{
	int n;
	scanf("%d",&n);
	char lis[25];
	
	int i;	
	for (i=0;i<n;i++){
		scanf("%s",&lis);
		int j;
		
		int k=strlen(lis);
		if(k<6){
			printf("Not Safe\n");
			continue;
		}
		
		int sign[4]={0};
		for (j=0;j<k;j++){
			if(lis[j]>='0'&&lis[j]<='9'){
				sign[0]+=1;
			}else if(lis[j]>='A'&&lis[j]<='Z'){
				sign[1]+=1;
			}else if(lis[j]>='a'&&lis[j]<='z'){
				sign[2]+=1;
			}else{
				sign[3]+=1;
			}
		}
		
		int count=0;
		for (j=0;j<4;j++){
			if(sign[j]!=0){
				count+=1;	
			}	
		} 
		if(count==1){
			printf("Not Safe\n");
		}else if(count==2){
			printf("Medium Safe\n");
		}else {
			printf("Safe\n");
		}

	}
	
	return 0;
}
