#include <stdio.h>

int main(){
    char c;
    printf("Enter a character: ", &c);
    scanf(" %c", &c);

 if(c =='a'|| c=='e'||  c=='i'||  c=='o'||  c=='u'||  c=='A'||  c=='E'||  c=='I'|| c=='O'||  c=='U'  ){
    printf("The character %c is a vowel\n",c);
 } else if((c>='a'&& c <='z') || (c>='A'&& c<='Z')){
    printf("The character %c is a consonant\n",c);
 } else{
    printf("The character %c is not an alphabet\n",c);
 }
    return 0;
}