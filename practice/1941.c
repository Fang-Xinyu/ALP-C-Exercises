#include <stdio.h>

int max(a,b)
{
	if(a>b){
		return a;
	}else{
		return b;
	}
}

int min(a,b)
{
	if(a<b){
		return a;
	}else{
		return b;
	}
}

int main()
{
	int i,dic[6]={0};
	for (i=0;i<6;i++){
		scanf("%d",&dic[i]);
	}
	//6
	int sum=dic[5];

	//5
	sum+=dic[4];
	dic[0]-=min(dic[0],dic[4]*11);

	//4
	int yu;
	sum+=dic[3];
	if(dic[1]>=dic[3]*5){
		dic[1]-=dic[3]*5;
	}else{
		yu=(dic[3]*5-dic[1])*4;
		dic[1]=0;
	}
	dic[0]-=min(dic[0],yu);

	//3
	if (dic[2]%4==0){
		sum+=dic[2]/4;
	}else{
		sum+=dic[2]/4+1;
		if(dic[1]>=5){
			dic[1]-=5;
			dic[0]=max(0,dic[0]-7);
		}else{
			dic[0]-=min(dic[0],27-dic[1]*4);
			dic[1]=0;
		}
	}
	//2
	if (dic[1]%9==0){
		sum+=dic[1]/9;
	}else{
		sum+=dic[1]/9+1;
		yu=4*(9-dic[1]%9);
		dic[0]-=min(dic[0],yu);
	}
	//1
	sum+=dic[0]/36;
	dic[0]%=36;
	if(dic[0]!=0){
		sum+=1;
	}

	printf("%d\n",sum);
	
	return 0;
}
