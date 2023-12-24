#include <stdio.h>

float balance = 1000; // Initial balance

void displayMenu() {
    printf("\nATM Simulator Menu:\n");
    printf("1. Deposit\n");
    printf("2. Withdraw\n");
    printf("3. Check Balance\n");
    printf("4. Exit\n");
}

void deposit() {
    float amount;
    printf("Enter deposit amount: ");
    scanf("%f", &amount);
    if (amount > 0) {
        balance += amount;
        printf("Deposit successful. New balance: %.2f", balance);
    } else {
        printf("Invalid amount. Please enter a positive value.");
    }
}

void withdraw() {
    float amount;
    printf("Enter withdrawal amount: ");
    scanf("%f", &amount);
    if (amount > 0 && amount <= balance) {
        balance -= amount;
        printf("Withdrawal successful. New balance: %.2f", balance);
    } else if (amount <= 0) {
        printf("Invalid amount. Please enter a positive value.");
    } else {
        printf("Insufficient funds. Withdrawal failed.");
    }
}

void checkBalance() {
    printf("Your current balance: %.2f", balance);
}

int main() {
    int choice;

    do {
        displayMenu();
        printf("\nEnter your choice (1-4): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                deposit();
                break;
            case 2:
                withdraw();
                break;
            case 3:
                checkBalance();
                break;
            case 4:
                printf("Exiting ATM simulator. Thank you!");
                break;
            default:
                printf("Invalid choice. Please enter a number between 1 and 4.");
        }

    } while (choice != 4);

    return 0;
}
