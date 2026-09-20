#include <stdio.h>

int main(){
    int SI, P, R,T;

    printf("Enter the value of P, R and T:");
    scanf("%d %d %d", &P, &R, &T);
    SI = (P*R*T)/100;
    printf("The value of simple interest is: %d", SI);
    return 0;
}