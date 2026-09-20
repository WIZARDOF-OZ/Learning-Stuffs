#include <stdio.h>

int main(){
    int a;
    scanf("%d", &a); // here & is the address operator, it gives the address of variable a to scanf() function.
    printf("The value of a is %d", a);
}