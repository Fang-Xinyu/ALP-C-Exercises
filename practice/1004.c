# include <stdio.h>

void sort(int arr[],int n)
{
	int i,j;
	for (i=0;i<n-1;i++){
		for (j=0;j<n-i-1;j++){
			if (arr[j]>arr[j+1]){
				int k;
				k=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=k;
			}
		}
	}
}

int main()
{
	int n;
	while (scanf("%d",&n) != EOF){
		if (n==0){
			break;
		}
		int i;
		int a[n],b[n];
		
		for (i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		
		for (i=0;i<n;i++){
			scanf("%d",&b[i]);
		}
		
		sort (a,n);
		sort (b,n);
		
		int j=0,t=0;
		i = 0;
		
		while (i<n){
			if (a[i]>b[j]){				
				i++;
				j++;
				t++;
			}else if (a[i]<b[i]){
				i++;
			}else{
				i++;
			}
		}
		
		if (t>n/2){
			printf("YES\n");
		}else{
			printf("NO\n");
		} 
		
	}
	
	return 0;
}
