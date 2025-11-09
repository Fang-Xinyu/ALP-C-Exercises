#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char line[256];
    while (fgets(line, sizeof(line), stdin)) {
        int n;
        sscanf(line, "%d", &n);
        int st = 0;

        while (st < strlen(line) && line[st] != ' ') {
            st++;
        }
        
        while (st < strlen(line) && line[st] == ' ') {
            st++;
        }
        char result[80];
        int count = 0;
        int i;
        for (i = st; i < st + n; i++) {
            if (isalpha(line[i])) {
                result[count] = line[i];
                count++;
            }
        }
        result[count] = '\0';
        printf("%s\n", result);
    }
    return 0;
}
