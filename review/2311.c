#include <stdio.h>

int  Input(int s[]) 
{
	int count=0;
	while(scanf("%d",&s[count])!=EOF){
		if(s[count]==0){
			break;
		}
		count++;		
	}
	return count;
}

void statistics(int n, int s[], int *max, int *min, float *avg)
{
	int sum=0;
	int i;
	for(i=0;i<n;i++){
		sum+=s[i];
		if(s[i]>*max){
			*max=s[i];
		}else if(s[i]<*min){
			*min=s[i];
		}
	}
	*avg=sum*1.0/n;

}

int main()
{
	int s[1000];
	int count=Input(s);
	
	int max=s[0];
	int min=s[0];
	float avg;
	statistics(count,s,&max,&min,&avg);
	printf("Num=%d\n",count);
	printf("Max=%d\n",max);
	printf("Min=%d\n",min);
	printf("Avg=%.3f\n",avg);
}
