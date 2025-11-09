#include <stdio.h>

//不成功 输出超限 

int main()
{
    char lis[6];
    while (gets(lis) != EOF) {
        int num[5];
        int i;
        num[0]=lis[0]-'0';
        for (i = 2; i < 6; i++) {
            num[i-1] = lis[i] - '0'; 
        }

        if (num[4] >= 4) {
            num[3]++;
        }

        for (i = 3; i >= 1; i--) {
            if (num[i] >= 7) {
                num[i] -= 7;
                num[i - 1]++;
            }
        }

        printf("%d.%d%d%d\n", num[0], num[1], num[2], num[3]);
    }

    return 0;
}

