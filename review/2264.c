#include <stdio.h>
int lis[5][5];

int compare(const void*a,const void*b)
{
	int *m=(int *)a;
	int *n=(int *)b;
	return *m-*n;
}

void change(int *dic,int i,int j)
{
	int temp=lis[dic[0]][dic[1]];
	lis[dic[0]][dic[1]]=lis[i][j];
	lis[i][j]=temp;
 }

void find_max(void)
{
	int max=lis[0][0];
	int max_p[2]={0,0};
	int i,j;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(lis[i][j]>max){
				max=lis[i][j];
				max_p[0]=i;
				max_p[1]=j;
			}
		}
	}
	change(max_p,2,2); 
}
 
void find_min(void)
 {
 	int cgij[][2]={ {0,0},{0,4},{4,0},{4,4} };
 	
 	int min[4];
 	int min_p[4][2]={5,5,5,5,5,5,5,5};
 	int dic_value[25];
 	
 	int i,j,k,t;
 	for(i=0;i<5;i++){
 		for(j=0;j<5;j++){
 			dic_value[i*5+j]=lis[i][j];
		 }
	 }

 	qsort(dic_value,25,sizeof(int),compare);
 	
 	for(i=0;i<4;i++){
 		for(j=0;j<5;j++){
 			for(k=0;k<5;k++){
 				for(t=0;t<i;t++){
 						if(min_p[t][0]==j&&min_p[t][1]==k){
 							break;
						 }
					}
 				if(dic_value[i]==lis[j][k]){					
		 			min[i]=dic_value[i];
		 			min_p[i][0]=j;
		 			min_p[i][1]=k;		 			
		 			break;
				}	
			}
			if(min_p[i][0]==j){
				break;
			}
		} 		
	}
	for(t=0;t<4;t++){
		change(min_p[t],cgij[t][0],cgij[t][1]);
		for(i=t+1;i<4;i++){
			if(cgij[t][0]==min_p[i][0]&&cgij[t][1]==min_p[i][1]){
				min_p[i][0]=min_p[t][0];
				min_p[i][1]=min_p[t][1];
				break;
			}
		}
		
	}
 	
 }
 
int main()
{
	
	while(scanf("%d %d %d %d %d",&lis[0][0],&lis[0][1],&lis[0][2],&lis[0][3],&lis[0][4])!=EOF){
		int i;
		for(i=1;i<5;i++){
			scanf("%d %d %d %d %d",&lis[i][0],&lis[i][1],&lis[i][2],&lis[i][3],&lis[i][4]);
		}
		find_max();
		find_min();
		int j;
		for(i=0;i<5;i++){
			for(j=0;j<5;j++){
				printf("%d ",lis[i][j]);
			}
			printf("\n");
		}
		printf("\n");
	}
		
	return 0;
}
