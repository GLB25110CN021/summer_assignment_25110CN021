#include <stdio.h>

struct Item {
    int id;
    char name[30];
    int qty;
};

int main() {
    struct Item inventory[10];
    int count = 0, choice;

    do {
        printf("\n--- Inventory Menu ---\n");
        printf("1. Add Item\n2. Display All\n3. Exit\nChoice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                if (count < 10) {
                    printf("Enter ID, Name, Qty: ");
                    scanf("%d %s %d", &inventory[count].id, inventory[count].name, &inventory[count].qty);
                    count++;
                } else printf("Inventory Full!\n");
                break;
            case 2:
                printf("\nID\tName\tQty\n");
                for(int i=0; i<count; i++)
                    printf("%d\t%s\t%d\n", inventory[i].id, inventory[i].name, inventory[i].qty);
                break;
            case 3: break;
            default: printf("Invalid choice!\n");
        }
    } while(choice != 3);

    return 0;
}