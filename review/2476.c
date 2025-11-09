#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX_LEN 1000
#define MAX_WORDS 200

// 分割字符串为单词，返回单词数
int split_words(char *s, char words[][MAX_LEN]) {
    int count = 0;
    while (*s) {
        // 跳过空格
        while (*s && isspace(*s)) s++;
        if (*s == '\0') break;

        // 提取一个单词
        int i = 0;
        while (*s && !isspace(*s)) {
            words[count][i++] = *s;
            s++;
        }
        words[count][i] = '\0';
        count++;
    }
    return count;
}

// 判断单词是否在另一个单词数组中
int is_in(char *word, char words[][MAX_LEN], int count) {
    int i;
    for (i = 0; i < count; i++) {
        if (strcmp(word, words[i]) == 0) {
            return 1;
        }
    }
    return 0;
}

// 查找最长公共单词
void search(char *s1, char *s2, char *s3) {
    char words1[MAX_WORDS][MAX_LEN];
    char words2[MAX_WORDS][MAX_LEN];

    int count1 = split_words(s1, words1);
    int count2 = split_words(s2, words2);

    int max_len = 0;
    int found = 0;
    int i;

    for (i = 0; i < count1; i++) {
        if (is_in(words1[i], words2, count2)) {
            int len = strlen(words1[i]);
            if (len > max_len) {
                strcpy(s3, words1[i]);
                max_len = len;
                found = 1;
            }
        }
    }

    if (!found) {
        strcpy(s3, "No common word!");
    }
}

int main() {
    char s1[MAX_LEN], s2[MAX_LEN];
    char result[MAX_LEN];

    while (fgets(s1, MAX_LEN, stdin) && fgets(s2, MAX_LEN, stdin)) {
        // 去除行尾换行符
        s1[strcspn(s1, "\n")] = '\0';
        s2[strcspn(s2, "\n")] = '\0';

        search(s1, s2, result);
        printf("%s\n", result);
    }

    return 0;
}

