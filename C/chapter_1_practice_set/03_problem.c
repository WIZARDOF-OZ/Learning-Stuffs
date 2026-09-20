#include <stdio.h>

int main(){
    int celcius, fahrenheit;
    printf("Enter the value of celcius:");
    scanf("%d", &celcius);

    fahrenheit = (celcius * 9/5) +32;
    printf("The value of fahrenheit is: %d", fahrenheit);
    return 0;   
}