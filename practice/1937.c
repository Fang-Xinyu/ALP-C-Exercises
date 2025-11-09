#include <stdio.h> 

int is_hw(int m)
{
	int k=m;
	int sum=0;
	while (k>0){
		sum=sum*10+k%10;
		k=k/10;
	}
	if(sum==m){
		return 1; 
	}else{
		return 0;
	}
}

int main()
{
	int m;
	scanf("%d",&m);
	if(is_hw(m)&&is_hw(m*m)&&is_hw(m*m*m)){
		printf("%d是三重回文数",m);
	}else{
		printf("%d不是三重回文数",m);
	}

	return 0;
}
