#include <stdio.h>
#include <string.h>

void copy_vowels(char *src, char *dest) {
    int i,j = 0;
    for (i = 0; src[i] != '\0'; i++) {
        char c = src[i];
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            dest[j++] = c;
        }
    }
    dest[j] = '\0';
}

int main() {
    char input[101];
    char result[101];

    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0'; 
    
    copy_vowels(input, result);
    printf("%s\n", result);
    
    return 0;
}
