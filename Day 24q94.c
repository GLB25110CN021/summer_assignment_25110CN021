#include <stdio.h>
#include <string.h>

void longestWord(char *str) {
    char res[50], word[50];
    int maxLen = 0, len = 0, j = 0;
    for (int i = 0; i <= strlen(str); i++) {
        if (str[i] != ' ' && str[i] != '\0') word[j++] = str[i];
        else {
            word[j] = '\0';
            if (j > maxLen) { maxLen = j; strcpy(res, word); }
            j = 0;
        }
    }
    printf("Longest: %s", res);
}