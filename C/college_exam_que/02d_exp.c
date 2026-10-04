#include <stdio.h>

int main(){
    char c;
    printf("Enter a character:", c);
    scanf("%c", &c);
    if((c>='A' && c<='Z') || (c>='a' && c<='z') ){
        printf("The character %c is an alphabet\n", c);
    } else if(c>='0'&& c<='9'){
        printf("The character %c is a digit\n", c);
    } else{
        printf("The character %c is a special character\n", c);
    }
    return 0;
}