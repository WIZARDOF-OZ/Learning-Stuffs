#include <stdio.h>

int isEven(int x) {
    return (x % 2 == 0);
}

int nthEven(int n) {          /* the n-th even number is 2*n */
    return 2 * n;
}

int sumFirstNEven(int n) {    /* pass-by-value: n is a copy */
    int i, sum = 0;
    for (i = 1; i <= n; i++) {
        sum = sum + nthEven(i);
    }
    return sum;
}

int main() {
    int n, result;

    printf("How many even numbers? ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Enter a positive n\n");
        return 0;
    }

    result = sumFirstNEven(n);
    printf("Sum of first %d even numbers = %d\n", n, result);
    printf("Formula check: n*(n+1) = %d\n", n * (n + 1));

    return 0;
}