#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); // 测试组数

    while (T--) {
        int m;
        scanf("%d", &m);

        int max_len = -1;
        int min_dia = 1e9;
        int max_code = -1;

        for (int i = 0; i < m; i++) {
            int len, dia, code;
            scanf("%d %d %d", &len, &dia, &code);

            // 满足更高优先级
            if (len > max_len) {
                max_len = len;
                min_dia = dia;
                max_code = code;
            } else if (len == max_len) {
                if (dia < min_dia) {
                    min_dia = dia;
                    max_code = code;
                } else if (dia == min_dia) {
                    if (code > max_code) {
                        max_code = code;
                    }
                }
            }
        }

        printf("%09d\n", max_code); // 输出9位编码，补零
    }

    return 0;
}

