#include <stdio.h>

char firstRepeating(char *str) {
    int count[256] = {0};
    for (int i = 0; str[i]; i++) {
        if (count[(int)str[i]] == 1) return str[i];
        count[(int)str[i]]++;
    }
    return '\0';
}