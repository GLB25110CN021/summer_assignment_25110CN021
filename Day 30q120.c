#include <stdio.h>

void addItems(char names[][50], int qtys[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Item %d name: ", i + 1);
        scanf("%s", names[i]);
        printf("Quantity: ");
        scanf("%d", &qtys[i]);
    }
}

void displayInventory(char names[][50], int qtys[], int n) {
    printf("\n--- Inventory Report ---\n");
    for (int i = 0; i < n; i++) {
        printf("Item: %-10s | Qty: %d\n", names[i], qtys[i]);
    }
}

int main() {
    int size = 2;
    char itemNames[size][50];
    int quantities[size];

    addItems(itemNames, quantities, size);
    displayInventory(itemNames, quantities, size);

    return 0;
}