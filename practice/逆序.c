#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LINE_COUNT 100
#define MAX_LINE_LENGTH 100

// 将一行字符串逆序
void reverse_string(char* str) {
    int len = strlen(str);
    int i = 0, j = len - 1;
    while (i < j) {
        char tmp = str[i];
        str[i] = str[j];
        str[j] = tmp;
        ++i;
        --j;
    }
}

int main() {
    FILE *fin, *fout;
    char lines[100][100];
    int line_lengths[LINE_COUNT];

    // 步骤2：读取 in.txt 到内存
    fin = fopen("in.txt", "r");
    if (!fin) {
        perror("无法打开 in.txt");
        return 1;
    }

    int count = 0;
    while (fgets(lines[count], MAX_LINE_LENGTH, fin) && count < LINE_COUNT) {
        // 去掉行尾换行符
        size_t len = strlen(lines[count]);
        if (lines[count][len - 1] == '\n') {
            lines[count][len - 1] = '\0';
        }
        reverse_string(lines[count]); // 每行逆序
        count++;
    }
    fclose(fin);

    // 步骤3：逆序写入 out.txt
    fout = fopen("out.txt", "w");
    if (!fout) {
        perror("无法创建 out.txt");
        return 1;
    }
	int i;
    for (i = count - 1; i >= 0; --i) {
        fprintf(fout, "%s\n", lines[i]);
    }

    fclose(fout);

    printf("处理完成，文件 out.txt 已生成。\n");
    return 0;
}

