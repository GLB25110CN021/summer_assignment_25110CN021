#include <stdio.h>

int main() {
    int seats = 50, req;
    printf("Available: %d. Enter seats to book: ", seats);
    scanf("%d", &req);
    if(req <= seats) printf("Booking Successful! Remaining: %d\n", seats - req);
    else printf("Not enough seats.\n");
    return 0;
}