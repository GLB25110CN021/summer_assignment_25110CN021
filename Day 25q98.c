#include <stdio.h>
#include <string.h>

int main() {
    char names[3][20] = {"Zoe", "Alex", "John"}, temp[20];
    for(int i=0; i<2; i++)
        for(int j=i+1; j<3; j++)
            if(strcmp(names[i], names[j]) > 0) {
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
    for(int i=0; i<3; i++) printf("%s ", names[i]);
    return 0;
}