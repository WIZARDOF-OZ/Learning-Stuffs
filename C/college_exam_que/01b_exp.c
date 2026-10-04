#include <stdio.h>

int main(){
    int a,b,temp;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
// Method 1
    printf("Before swapping with temp: a=%d, b=%d\n", a,b);

    temp = a;
    a=b;
    b= temp;
    printf("After swapping with temp: a=%d, b=%d\n",a,b);

// restoring the values after swapping
temp = a;
a= b;
b = temp;

// Method 2
    printf("Before swapping without temp: a=%d, b=%d\n", a,b);
     a = a+b;
     a = a-b;
     b= a-b;
    printf("After swapping without temp: a=%d, b=%d\n",a,b);
    return 0;
}