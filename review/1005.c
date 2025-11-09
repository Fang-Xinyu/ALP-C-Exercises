#include <stdio.h>
#include <string.h>  //memset函数 

int n,m,t;
int visited[25][25];
int sign;
char map[25][25];
int dic[25*25][2];
int xx[4]={0,0,-1,1};
int yy[4]={-1,1,0,0};
int p,q;

int find(int count)
{
	while(q<p){
		int size=p-q;
		int i,j;
		for(j=0;j<size;j++){  //用 j 和下面的 i 区分 
			int x,y;
			x=dic[q][0];
			y=dic[q][1];
			q++;
			if(map[x][y]=='P'){
				return t-count;
			}
			int nx,ny;
			for(i=0;i<4;i++){
				nx=x+xx[i];
				ny=y+yy[i];
				if(nx>=0&&nx<m&&ny>=0&&ny<n&&map[nx][ny]!='*'&&visited[nx][ny]==0){
					dic[p][0]=nx;
					dic[p][1]=ny;
					visited[nx][ny]=1;  // 标记 
					p++;
				}
			}
		}
		count++;
	}
	return -1;
}

int main()
{
	while(scanf("%d %d %d",&n,&m,&t)!=EOF){
		if(n==0&&m==0&&t==0){
			break;
		}

		int i,j;
		for(i=0;i<m;i++){
			scanf("%s",&map[i]);			
		}
		
		int sx=-1,sy=-1;
		for(i=0;i<m;i++){
			for(j=0;j<n;j++){
				if(map[i][j]=='S'){
					sx=i;
					sy=j;
					break;
				}
			}
			if(sx!=-1){
				break;
			}
		}
		
		memset(visited,0,sizeof(visited));
		sign=0;
		p=q=0;
		
		visited[sx][sy]=1;
		dic[p][0]=sx;
		dic[p][1]=sy;
		p++;
		sign=find(0);
		
		if(sign>=0){  // =0 时也可以 
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}
	
	
	
	
	return 0;
}
