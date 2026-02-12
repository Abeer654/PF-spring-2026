#include <stdio.h>

int main() {
    int choice;
    float balance = 10000;
    float amount;

    printf("\n===== ATM MENU =====\n");
    printf("1. Balance Inquiry\n");
    printf("2. Cash Withdrawal\n");
    printf("3. Deposit\n");
    printf("4. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {

        case 1:
            printf("\nYour current balance is: %.2f\n", balance);
            break;

        case 2:
            printf("\nEnter amount to withdraw: ");
            scanf("%f", &amount);

            if(amount <= balance && amount > 0) {
                balance = balance - amount;   
                printf("Withdrawal successful!\n");
                printf("Remaining balance: %.2f\n", balance);
            } else {
                printf("Insufficient balance or invalid amount!\n");
            }
            break;

        case 3:
            printf("\nEnter amount to deposit: ");
            scanf("%f", &amount);

            if(amount > 0) {
                balance = balance + amount;   
                printf("Deposit successful!\n");
                printf("Updated balance: %.2f\n", balance);
            } else {
                printf("Invalid deposit amount!\n");
            }
            break;

        case 4:
            printf("\nThank you for using ATM. Goodbye!\n");
            break;

        default:
            printf("\nInvalid choice! Please select 1-4.\n");
    }

    return 0;
}
