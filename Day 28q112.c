#include <stdio.h>

struct Contact {
    char name[50];
    char phone[15];
};

int main() {
    struct Contact c;
    printf("Enter Name and Phone: ");
    scanf("%s %s", c.name, c.phone);
    printf("Contact Saved: %s -> %s\n", c.name, c.phone);
    return 0;
}