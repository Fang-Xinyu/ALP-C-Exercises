#include<stdio.h>
#include<stdlib.h>

// compare内部也要用 double 返回值1 -1 0 为 int 
int compare(const void *a,const void *b) 
{
    double *m=(double *)a;
    double *n=(double *)b;
    if(n[0]>m[0]){
    	return 1;
	}else if(m[0]>n[0]){
		return -1;
	}else{
		return 0;
	}
}

int main()
{
    int m,n;
    while(scanf("%d %d",&m,&n)!=EOF){
        if(m==0&&n==0){
            break;
        }
        int i;
        double lis[25][2];
        double sum=0;
        for(i=0;i<m;i++){
            int t,v;
            scanf("%d %d",&t,&v);
            
            if(t==0){
                sum+=v;
                continue;
            }
            
            lis[i][0]=v*1.0/t;
            lis[i][1]=t;
        }
        qsort(lis,m,sizeof(double)*2,compare);
		
        int p=0;
        while(n>0 && p<m){
            if(n>=lis[p][1]){
                sum+=lis[p][1]*lis[p][0];
                n-=lis[p][1];
                p++;
            }else{
                sum+=n*lis[p][0];
                break;
            } 
        }
        printf("%.2f\n",sum);
    }
    return 0;
}
