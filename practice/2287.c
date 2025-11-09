#include <stdio.h>

int main() {
    int n;
    while (scanf("%d", &n) != EOF && n != 0) {
        printf("%lld\n", (1LL << n) - 1);
    }
    return 0;
}
