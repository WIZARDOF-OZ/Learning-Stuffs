#include <stdio.h>

int main(){
int num;
printf("Enter a number: ");
scanf("%d", &num);

if(num == 0)
 printf("The number is zero");
 else if(num > 0)
 printf("The number is positive");
 else if( num <0)
 printf("The number is negative");
 

 if(num % 2 == 0)
  printf("Number is even");
 else 
 printf("Number is odd");

 return 0;
}