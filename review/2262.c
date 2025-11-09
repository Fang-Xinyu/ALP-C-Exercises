#include <stdio.h>

int dirc(int x1,int x2,int y1,int y2)
{
	int s=x1*y2-x2*y1;
	if(s>0){
		return 1; //不是返回 s，返回标记正负号 
	}else{
		return -1;
	}	
}

int main()
{
	int n;
	int i;
	int p[100][2];
	while(scanf("%d",&n)!=EOF){
		if(n==0){
			break;
		}
		for(i=0;i<n;i++){
			scanf("%d %d",&p[i][0],&p[i][1]);
		}
		int q=1;
		int sign=0;
		for(i=0;i<n;i++){
			int x1=p[i][0]-p[(i+1)%n][0];
			int y1=p[i][1]-p[(i+1)%n][1];
			int x2=p[(i+1)%n][0]-p[(i+2)%n][0];
			int y2=p[(i+1)%n][1]-p[(i+2)%n][1];	
			if(sign==0){
				sign=dirc(x1,x2,y1,y2);
			}else if(dirc(x1,x2,y1,y2)!=sign){
				printf("concave\n");
				q=0;
				break;
			}
		}
		if(q==1){
			printf("convex\n");
		}
	}
	
	return 0;
}
