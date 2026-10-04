#include <stdio.h>

int main(){
    int a,b,c,d,e, r1,r2,r3,r4,r5,r6,r8,r7;
    printf("Enter a:", a);
    scanf("%d", &a);
    printf("Enter b:", b);
    scanf("%d", &b);
    printf("Enter c:", c);
    scanf("%d", &c);
    printf("Enter d:", d);
    scanf("%d", &d);
    printf("Enter e:", e);
    scanf("%d", &e);
    r1= a+b+c+d+e;
    r2= a-b-c-d-e;
    r3 = a+b*c;
    r4 = a/b+c-d*e;
    r5 = (a+b)/c;
    r6 = (a-b)*c;
    r7 = (a+b)*c;
    r8 = a + b > c && b != 0; 
    printf("The value of r1 is %d\n", r1);
    printf("The value of r2 is %d\n", r2);  
    printf("The value of r3 is %d\n", r3);  
    printf("The value of r4 is %d\n", r4);  
    printf("The value of r5 is %d\n", r5);  
    printf("The value of r6 is %d\n", r6);  
    printf("The value of r7 is %d\n", r7);  
    printf("The value of r8 is %d\n", r8);  
  

    return 0;
}