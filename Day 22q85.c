#include <stdio.h>

int main() {
    char str[200];
    int i, words = 1;

    printf("Enter a sentence: ");
    gets(str); // Note: fgets is safer for modern C

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t') {
            words++;
        }
    }

    printf("Total number of words: %d\n", words);
    return 0;
}