#include <stdio.h>

int main(){
printf("Size of char: %zu byte(s)\n", sizeof(char));    
printf("Size of int: %zu byte(s)\n", sizeof(int));
printf("Size of float: %zu byte(s)\n", sizeof(float));
}

// Here %zu is a format specifier for sizeof() operator.
// This size may vary depending on the system architecture and compiler implementation.
// sizeof() is a compile-time operator not a function.