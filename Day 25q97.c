#include <stdio.h>
#include <string.h>

int main() {
    char s1[] = "apple", s2[] = "pale";
    int count[256] = {0};
    for(int i=0; s1[i]; i++) count[(int)s1[i]] = 1;
    printf("Common characters: ");
    for(int i=0; s2[i]; i++) {
        if(count[(int)s2[i]] == 1) {
            printf("%c ", s2[i]);
            count[(int)s2[i]] = 0; // Avoid duplicates
        }
    }
    return 0;
}