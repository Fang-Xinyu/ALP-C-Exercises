#include <stdio.h>

int main()
{
	int s;
	scanf("%d",&s);
	int t=0;
	int i,j,k;
	for(i=1;i<=s-3;i++){
		for(j=i;j<s-i-2;j++){
			int k=s-i-j;
			if(k<=j){
				continue;
			} 
			int sum1=i*i+j*j+k*k;
			int d,e,f;
			int sum2;
			for (d = i + 1; d < s - 2; d++) {
                for (e = d + 1; e < s - d - 1; e++) {
                    f = s - d - e;
                    if (f <= e) continue;

                    int sum2 = d*d + e*e + f*f;

                    if (sum1 == sum2) {
                        printf("(%d,%d,%d):(%d,%d,%d)\n", i, j, k, d, e, f);
                    }
                }
            }
		}
	}
	

	return 0;
}
