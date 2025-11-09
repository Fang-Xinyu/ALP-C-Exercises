#include <stdio.h>
#include <stdlib.h>

//没写 

int main() {
    int m, n;
    scanf("%d,%d", &m, &n);
    
    if (m < n) {
        printf("0\n");
        return 0;
    }
    
    // 初始化dp数组，所有元素默认为0
    long long dp[m + 1][n + 1];
    int i;
    for (i = 0; i <= m; i++) {
    	int j;
        for (j = 0; j <= n; j++) {
            dp[i][j] = 0;
        }
    }
    dp[0][0] = 1; // 初始条件
    int j;
    for (i = 0; i <= m; i++) {
        for (j = 0; j <= i && j <= n; j++) {
            if (i == 0 && j == 0) continue; // 已初始化
            long long sum = 0;
            if (i > 0 && (i - 1) >= j) {
                sum += dp[i - 1][j];
            }
            if (j > 0 && i >= j) {
                sum += dp[i][j - 1];
            }
            dp[i][j] = sum;
        }
    }
    
    printf("%lld\n", dp[m][n]);
    return 0;
}
