#include <stdio.h>
#include <string.h>

int main() {
    char words[3][20] = {"Banana", "Kiwi", "Apple"}, temp[20];
    for(int i=0; i<2; i++)
        for(int j=i+1; j<3; j++)
            if(strlen(words[i]) > strlen(words[j])) {
                strcpy(temp, words[i]);
                strcpy(words[i], words[j]);
                strcpy(words[j], temp);
            }
    for(int i=0; i<3; i++) printf("%s ", words[i]);
    return 0;
}