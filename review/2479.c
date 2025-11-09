#include <stdio.h>
#include <stdbool.h>

int main() {
    int n, m, p;
    scanf("%d,%d,%d", &n, &m, &p);

    bool out[501] = {false};  // 是否出列
    int out_order[501];       // 出列顺序
    int out_count = 0;
    int remaining = n;
    int direction = 1;  // 1=顺序，-1=逆序
    int current = 1;    // 当前编号（顺序从1开始）

    int i, printed, count;

    while (remaining > m - 1) {
        count = 0;
        if (direction == 1) {
            // 顺序
            for (i = 1; i <= n && remaining > m - 1; i++) {
                if (!out[i]) {
                    count++;
                    if (count == m) {
                        out[i] = true;
                        out_order[out_count++] = i;
                        remaining--;
                        count = 0;
                    }
                }
            }
        } else {
            // 逆序
            for (i = n; i >= 1 && remaining > m - 1; i--) {
                if (!out[i]) {
                    count++;
                    if (count == m) {
                        out[i] = true;
                        out_order[out_count++] = i;
                        remaining--;
                        count = 0;
                    }
                }
            }
        }
        direction *= -1; // 改变方向
    }

    // 打印剩下的 m-1 个未出列的编号（按升序）
    printed = 0;
    for (i = 1; i <= n; i++) {
        if (!out[i]) {
            printf("%d ", i);
            printed++;            
        }
    }
    printf("\n");

    // 输出第 p 个出列的小朋友编号
    printf("%d\n", out_order[p - 1]);

    return 0;
}

