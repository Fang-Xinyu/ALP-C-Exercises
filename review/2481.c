#include <stdio.h>
#include <string.h>

// 判断a是否是b的子序列（不等于则为真子串）
int is_subsequence(char *a, char *b) {
    int len_a = strlen(a), len_b = strlen(b);
    int i = 0, j = 0;
    while (i < len_a && j < len_b) {
        if (a[i] == b[j]) {
            i++;
        }
        j++;
    }
    return i == len_a;
}

int main() {
    int n, i, j, count = 0;
    char str[100][101];  // 最多100个字符串，每个最多100字符

    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%s", str[i]);
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i == j) continue;
            if (strcmp(str[i], str[j]) != 0 && is_subsequence(str[i], str[j])) {
                count++;
            }
        }
    }

    printf("%d\n", count);
    return 0;
}

