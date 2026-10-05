#include <stdio.h>

int reverseNum(int n, int rev) {
    if (n == 0)
        return rev;
    return reverseNum(n / 10, rev * 10 + n % 10);
}

int isPalindrome(int n) {
    if (n < 0)
        return 0;   /* usually negatives are not palindromes in lab */
    return n == reverseNum(n, 0);
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (isPalindrome(n))
        printf("Palindrome\n");
    else
        printf("Not a palindrome\n");
    return 0;
}