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
    // Print Armstrong numbers
    printf("The Armstrong numbers are: ");
    for (int i = num1; i <= num2; i++) {
        if (isArmstrong(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
   // Print palindromic numbers
    printf("The Palindromes are: ");
    for (int i = num1; i <= num2; i++) {
        if (isPalindrome(i)) {
            printf(" %d", i);
        }
    }
    printf("\n");
    // Print prime numbers
    printf("The Prime numbers are: ");
    for (int i = num1; i <= num2; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
    // Print strong numbers
    printf("The Strong numbers are: ");
    for (int i = num1; i <= num2; i++) {
        if (isStrong(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    
    return 0;
}