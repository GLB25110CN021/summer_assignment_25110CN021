#include <stdio.h>

char maxOccurring(char *str) {
    int count[256] = {0}, max = 0;
    char res;
    for (int i = 0; str[i]; i++) {
        count[(int)str[i]]++;
        if (max < count[(int)str[i]]) {
            max = count[(int)str[i]];
            res = str[i];
        }
    }
    return res;
}