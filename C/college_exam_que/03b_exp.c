#include <stdio.h>

int main(){
    int a,b,c, type;


    printf("Enter three sides:");
    scanf("%d %d %d", &a, &b, &c);

    /// Using if else
    printf("Using if and else\n");
    if(a==b || b==c || c==a){
        printf("Isosceles triange\n");

    } else if (a==b && b==c){
        printf("Equilateral triangle");
    } else {
        printf("Scalene triangle");
    }


// using switch
    type = (a==b && b==c)? 1:(a==b || b==c || c==a)? 2:3;
    printf("\nUsing switch\n");


    switch(type){
        case 1:
            printf("Equilateral triangle");
            break;
        case 2: 
            printf("Isosceles triangle");
            break;
        case 3: 
            printf("Scalene triangle");
            break;
    }
    return 0;
}