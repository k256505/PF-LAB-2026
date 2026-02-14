#include <stdio.h>
int main() {
    int choice;
    int amount;
    int balance = 10000;
    do {
        printf("\n====== ATM MENU ======\n");
        printf("1. Balance Inquiry\n");
        printf("2. Cash Withdrawal\n");
        printf("3. Deposit\n");
        printf("4. Exit\n");
        printf("======================\n");
        printf("Enter your choice (1-4): ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("\nCurrent balance: %d\n", balance);
                break;
            case 2:
                printf("\nEnter the amount you want to withdraw: ");
                scanf("%d", &amount);
                if (amount > balance) {
                    printf("Insufficient funds! Please enter a valid amount.\n");
                } else {
                    balance -= amount; 
                    printf("Withdrawal successful! Your new balance is %d\n", balance);
                }
                break;
            case 3:
                printf("\nEnter amount to deposit: ");
                scanf("%d", &amount);
                balance += amount; 
                printf("Deposit successful! New balance: %d\n", balance);
                break;
            case 4:
                printf("\nThank you for using our ATM. Goodbye!\n");
                break;
            default:
                printf("\nInvalid choice! Please select from 1-4.\n");
        }
    } while (choice != 4); 
return 0;
}
