#include <stdio.h>

int main()
{
	int m;
	scanf("%d",&m);
	int p=1;
	int a[m][m];
	
	int i,j;
	for (i=0;i<m;i++){
		for (j=0;j<m;j++){
				scanf("%d",&a[i][j]);
		}
	}
	
	for (i=0;i<m;i++){
		for (j=0;j<i;j++){
			if(a[i][j]!=0){
				p=0;
				break;
			}

		}
		if (p==0){
			break;
		}
	}
	
	if (p==1){
		printf("YES\n");
	} else{
		printf("NO\n");
	}
	
	return 0;
}
