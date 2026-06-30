#include <stdio.h>

int main() {
    float balance = 1000.0, amount;
    int choice;
    printf("1.Deposit 2.Withdraw 3.Balance: "); scanf("%d", &choice);
    if(choice == 1) { 
        scanf("%f", &amount); balance += amount; 
    } else if(choice == 2) { 
        scanf("%f", &amount); 
        if(amount <= balance) balance -= amount; else printf("Low funds.");
    }
    printf("Balance: %.2f", balance);
    return 0;
}