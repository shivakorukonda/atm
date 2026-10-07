#include <stdio.h>

void checkBalance(float balance)
{
    printf("\n==============================\n");
    printf("        ACCOUNT BALANCE\n");
    printf("==============================\n");
    printf("Current Balance: Rs. %.2f\n", balance);
}

float deposit(float balance)
{
    float amount;

    printf("\nEnter amount to deposit: Rs. ");
    scanf("%f", &amount);

    if (amount <= 0)
    {
        printf("Invalid amount!\n");
    }
    else
    {
        balance = balance + amount;

        printf("Deposit successful!\n");
        printf("Deposited: Rs. %.2f\n", amount);
        printf("New Balance: Rs. %.2f\n", balance);
    }

    return balance;
}

float withdraw(float balance)
{
    float amount;

    printf("\nEnter amount to withdraw: Rs. ");
    scanf("%f", &amount);

    if (amount <= 0)
    {
        printf("Invalid amount!\n");
    }
    else if (amount > balance)
    {
        printf("Insufficient balance!\n");
    }
    else
    {
        balance = balance - amount;

        printf("Please collect your cash.\n");
        printf("Withdrawn: Rs. %.2f\n", amount);
        printf("Remaining Balance: Rs. %.2f\n", balance);
    }

    return balance;
}

int main()
{
    float balance = 10000.00;
    int choice;

    while (1)
    {
        printf("\n\n================================\n");
        printf("          ATM MACHINE\n");
        printf("================================\n");

        printf("1. Check Balance\n");
        printf("2. Withdraw\n");
        printf("3. Deposit\n");
        printf("4. Exit\n");

        printf("--------------------------------\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                checkBalance(balance);
                break;

            case 2:
                balance = withdraw(balance);
                break;

            case 3:
                balance = deposit(balance);
                break;

            case 4:
                printf("\nThank you for using the ATM!\n");
                printf("Please collect your card.\n");
                return 0;

            default:
                printf("\nInvalid choice! Please try again.\n");
        }
    }

    return 0;
}