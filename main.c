#include <stdio.h>
#include "NumClass.h"


int main() {
    int num1, num2;

    // Input
    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    // Validate input
    if (num1 <= 0 || num2 <= 0) {
        printf("Please enter positive integers.\n");
        return 1; // Exit with an error code
    }


    // Print prime numbers
    printf("Prime numbers between %d and %d:\n", num1, num2);
    for (int i = num1; i <= num2; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    // Print Armstrong numbers
    printf("Armstrong numbers between %d and %d:\n", num1, num2);
    for (int i = num1; i <= num2; i++) {
        if (isArmstrong(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    // Print strong numbers
    printf("Strong numbers between %d and %d:\n", num1, num2);
    for (int i = num1; i <= num2; i++) {
        if (isStrong(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    // Print palindromic numbers
    printf("Palindromic numbers between %d and %d:\n", num1, num2);
    for (int i = num1; i <= num2; i++) {
        if (isPalindrome(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}