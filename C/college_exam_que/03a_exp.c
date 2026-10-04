#include <stdio.h>

int main(){
    

float amount, balance =30000.0;
int choice;
do{
    printf("1. Deposit\n");
    printf("2. Withdraw\n");
printf("3. Check Balance\n");
printf("4. Exit\n");
printf("Enter your choice:\n");
scanf("%d", &choice);


switch(choice){
    case 1:
     printf("Enter the amount to deposit:");
     scanf("%f", &amount);

    if(amount >0){
        balance = balance + amount;
        printf("Amount deposited successfully. New balance: %.2f\n", balance);
    } else {
        printf("Invalid amount. Please enter a positive value.\n");
    }
     break;
    case 2: 
     printf("Enter the amount to withdraw:");
     scanf("%f", &amount);

     if(amount >0 && amount <= balance){
        balance = balance - amount;
        printf("Amount withdrawn successfully. New balance: %.2f\n", balance);
     } else if (amount > balance){
        printf("Insufficient balance. Your current balance is: %.2f\n", balance);
     } else printf("Invalid amount. Please enter a positive value.\n");
     break;
    case 3:
     printf("Your current balance is: %.2f\n", balance);
     break;
    case 4: 
     printf("Thank you. Exiting the program.\n");
     break;
    default:
     printf("Invalid choice. Please try again.\n");
     

}

}while (choice != 4);



    
    return 0;
}