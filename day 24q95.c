#include <stdio.h>

void removeDuplicates(char *str) {
    int exists[256] = {0}, index = 0;
    for (int i = 0; str[i]; i++) {
        if (!exists[(int)str[i]]) {
            exists[(int)str[i]] = 1;
            str[index++] = str[i];
        }
    }
    str[index] = '\0';
}