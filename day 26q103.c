#include <stdio.h>

int main() {
    int score = 0, ans;
    printf("Q1: 2+2? 1) 4  2) 5: "); scanf("%d", &ans);
    if(ans == 1) score++;
    printf("Q2: Capital of France? 1) Paris 2) Rome: "); scanf("%d", &ans);
    if(ans == 1) score++;
    printf("Final Score: %d/2", score);
    return 0;
}