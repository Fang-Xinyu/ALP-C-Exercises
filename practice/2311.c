#include <stdio.h>

int Input(int s[])
{
	int len=0;
	int n;
	while(scanf("%d",&n)!=EOF){
		if(n==0){
			break;
		}
		s[len]=n;
		len++;
	}
	return len;
}

void statistics(int n, int s[], int *max, int *min, float *avg)
{
	int i;
	int sum=0;
	for(i=0;i<n;i++){
		sum+=s[i];
		if(s[i]>*max){
			*max=s[i]; 
		}
		if(s[i]<*min){
			*min=s[i];
		}
	}
	*avg=sum*1.0/n;
}


int main()
{	
	int lis[1000];	
	int count=Input(lis);
	
	int max=lis[0],min=lis[0];
	float avg;
	statistics(count, lis, &max, &min, &avg);
	printf("Num=%d\n",count);
	printf("Max=%d\n",max);
	printf("Min=%d\n",min);	
	printf("Avg=%.3f\n",avg);	
	return 0;
}
