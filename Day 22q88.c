#include <stdio.h>
#include <string.h>

char firstNonRepeating(char *str) {
    int count[256] = {0};
    for (int i = 0; str[i]; i++) count[(int)str[i]]++;
    for (int i = 0; str[i]; i++) {
        if (count[(int)str[i]] == 1) return str[i];
    }
    return '\0';
}