#include <stdio.h>

int main () {

    int pin = 1111;                    //PIN Code
    int enteredPin;
    int choice;
    float balance = 1000.0;
    float amount;

    printf("\n--- ATM Simulator ---\n");

    printf("Enter your PIN: ");             //PIN code check
    scanf("%d", &enteredPin);

    if (enteredPin != pin) {
        printf("Incorrect PIN. Access denied.\n");
        return 0;
    }

    printf("\n Welcome to ATM Simulator\n");

    do {                                                           // Menu
        printf("\n --- ATM Simulator Menu ---\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Choose an option:");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                printf("Your current balance: %.2f\n", balance);        //balance check
                break;

            case 2:
                printf("Enter amount to deposit: ");                //add amount to the balance
                scanf("%f", &amount);

                if (amount > 0) {
                    balance = balance + amount;
                    printf("Successfully deposited %.2f\n", amount);
                } else {
                    printf("Invalid amount\n");
                }
                break;

            case 3:
                printf("Enter amount to withdraw: ");                     //deduct an amount from the balance
                scanf("%f", &amount);

                if (amount > 0 && amount <= balance) {
                    balance = balance - amount;
                    printf("Please take your cash: %.2f\n", amount);
                } else {
                    printf("Insufficient balance or invalid amount\n");
                }
                break;

            case 4:
                printf("Thank you for using the ATM Simulator. Goodbye!");
                break;

                default:
                printf("Invalid choice. Try again\n");               //if you tried to choose a different number
        }

    } while (choice != 4);        //exit menu


    return 0;
}