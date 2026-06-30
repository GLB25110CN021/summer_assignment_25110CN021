#include <stdbool.h>
#include <string.h>

bool areAnagrams(char *s1, char *s2) {
    if (strlen(s1) != strlen(s2)) return false;
    int count[256] = {0};
    for (int i = 0; s1[i]; i++) {
        count[(int)s1[i]]++;
        count[(int)s2[i]]--;
    }
    for (int i = 0; i < 256; i++) if (count[i] != 0) return false;
    return true;
}