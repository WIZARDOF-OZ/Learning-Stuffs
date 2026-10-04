#include <stdio.h>

int main(){
    float marks;
    int income;
    printf("Enter your scholarship marks: ");
    scanf("%f", &marks);

if(marks>=40 && marks<=100){
    printf("You are eligible for scholarship\n");
} else printf("You are not eligible for scholarship\n");

printf("Enter your income amount: ");
scanf("%d", &income);
if(income>= 10000 && income<=1000000){
    printf("You are eligible for loan\n");
} else printf("You are not eligible for loan\n");
    return 0;
}