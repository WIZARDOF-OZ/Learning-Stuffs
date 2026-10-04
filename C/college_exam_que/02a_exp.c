#include <stdio.h>

int main(){
    int n1;
    printf("Enter a numbers:");
    scanf("%d", &n1);
    if(n1>0){
        printf("The number %d is positive\n", n1);
    } else if(n1<0){
        printf("The number %d is negative\n", n1);
    
    } else{
        printf("The number is zero\n");
    }

    if(n1%2==0){
        printf("The number %d is even\n", n1);
    }else{
        printf("The number %d is odd\n", n1);
    }
    return 0;
}