#include <stdio.h>

void CheckBalance(double balance);
double deposit();
double Withdraw(double balance);

int main()
{
    // BANKING PROGRAMMM
    int choice = 0;
    double balance = 0.0;
    printf("=====WELCOME TO THE BANK=====\n");

    do
    {
        printf("\nYour options: \n");
        printf("\n1. Check balance.\n2. Deposit\n3. Withdraw\n4. Exit\n");
        printf("Your choice? : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            CheckBalance(balance);
            break;
        case 2:
            balance += deposit();
            break;
        case 3:
            balance -= Withdraw(balance);
            break;
        case 4:
            printf("Thank you for using the bank!\n");
            break;
        default:
            printf("\n Invalid choice. please enter 1-4.\n");
        }
    } while (choice != 4);

    return 0;
}

void CheckBalance(double balance)
{
    printf("Your balance is: $%.3lf\n", balance);
}

double deposit()
{
    double deposit = 0;
    printf("How much would you like to deposit?: ");
    scanf("%lf", &deposit);
    if(deposit<0){
        printf("Invalid deposit amount. try something else");
        return 0.0;
    }else{
        printf("Deposited successfully! deposited $%.3lf", deposit);
        return deposit;
    }
    
}

double Withdraw(double balance)
{
    double withdraw = 0;
    printf("How much would you like to withdraw: ");
    scanf("%lf", &withdraw);
    if(withdraw<0){
        printf("Invalid try different amount.");
        return 0.0;
    }else if(withdraw>balance){
        printf("Your balance cannot handle this much. try different amount");
        return 0.0;
    }
    else{
        printf("Withdrawed sucessfully. withdrawed amount %.3lf", withdraw);
        return withdraw;
    }
}