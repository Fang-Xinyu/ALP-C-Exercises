#include <stdio.h>

int main()
{
    int n,m;//tou jiao
    while(scanf("%d %d",&n,&m)!=EOF){
        if (n==0 && m==0){
            break;
        }
        
        int k=n*4-m;
        
        //&& k>=0 保证全为兔子可能实现  && k/2<n防止出现负数
        if(k%2==0 && k>=0 && k/2<n) { 									  
            int g=k/2;
            int t=n-g;
            printf("%d %d\n",g,t);
        }else{
            printf("Error\n");
        }

    }

    return 0;
}
