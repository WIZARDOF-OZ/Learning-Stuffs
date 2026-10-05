#include <stdio.h>

void printReverseHelper(char s[], int i) {
    if (s[i] == '\0')
        return;                      /* reached end; start printing while returning */
    printReverseHelper(s, i + 1);
    printf("%c", s[i]);
}

void printReverse(char s[]) {        /* helper so main always starts at index 0 */
    printReverseHelper(s, 0);
    printf("\n");
}

int main() {
    char s[100];
    printf("Enter a string: ");
    scanf("%s", s);
    printf("Reverse: ");
    printReverse(s);
    return 0;
}