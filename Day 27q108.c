#include <stdio.h>

struct Book {
    int id;
    char title[50];
};

int main() {
    struct Book b = {101, "C_Programming"};
    printf("Book ID: %d\nBook Title: %s\nStatus: Available\n", b.id, b.title);
    return 0;
}