#include <stdio.h>

int factorial(int n){
 int i, f=1;
 for(i =1; i<=n; i++){
    f = f*i;

}   
return f;
}

int main(){
    int n;
    printf("Enter a number to find its factorial:");
    scanf("%d", &n);
    if(n<0){
        printf("Factorial is not defined for negative numbers.\n");
        return 1;
    }

    printf("%d! =%d\n", n, factorial(n));
    return 0;
}