#include <stdio.h>

void Multi(int a[][3],int b[][2],int c[][2])
{
	int sum=0;
	int i,j,k;
	for(i=0;i<2;i++){		
		for(k=0;k<2;k++){
			
			for(j=0;j<3;j++){
				sum+=a[i][j] * b[j][k];
			}
			c[i][k]=sum;
			sum=0;
			
		}		
	} 
}

int main()
{
	int a[2][3];
	int b[3][2];
	int c[2][2];
	int i;
	for(i=0;i<2;i++){
		scanf("%d %d %d",&a[i][0],&a[i][1],&a[i][2]);
	}
	for(i=0;i<3;i++){
		scanf("%d %d",&b[i][0],&b[i][1]);
	}
	Multi(a,b,c);
	for(i=0;i<2;i++){
		printf("%d %d\n",c[i][0],c[i][1]);
	}
	return 0;
}
