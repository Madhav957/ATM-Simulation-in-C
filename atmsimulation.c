#include <stdio.h>
int main(){
    float balance = 20000,amount;
    int pin=2349,enteredpin;
    printf("====== Welcome To ATM ====== \n");
    printf("------ Enter your 4-digit pin ------ \n");
    scanf("%d",&enteredpin);
    if(pin!=enteredpin) printf("Incorrect Pin ! Access Denied.\n");
    while(1){
    printf("1.Check Balance\n");
    printf("2.Deposit Money\n");
    printf("3.Withdraw Money\n");
    printf("4.Exit\n");
    int choice;
    printf("Enter Your Choice");
    scanf("%d",&choice);
    switch(choice){
        case 1 : printf("Current Balance in your account is %f\n",balance); break;
        case 2 : printf("Enter the amount to deposit in your account");
        scanf("%f",&amount);
        balance = balance + amount;
        break;
        case 3 : printf("Enter the amount to Withdraw");
        scanf("%f",&amount);
        if(balance>=amount){
            balance = balance - amount;
        }
        else if(balance<amount) printf(" Insufficient Balance !");
         break;
        case 4 : printf("Final Balance: %f\nThank you for using our ATM!\n", balance);
        break;
        default : printf("------ Invalid Choice! Please try again. ------\n");
    }

}

    return 0;
}