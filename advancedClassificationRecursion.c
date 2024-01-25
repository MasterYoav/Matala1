#include "NumClass.h"

// Function to calculate the factorial of a number recursively
int calculateFactorialRecursively(int num) {
    return (num == 0) ? 1 : num * calculateFactorialRecursively(num - 1);
}
 int isArmstrong(int num) {
    int originalNum = num;
    int result = 0;
    int numDigits = 0;

    // Count the number of digits
    while (originalNum != 0) {
        originalNum /= 10;
        ++numDigits;
    }

    originalNum = num;

    // Calculate Armstrong sum recursively
    while (originalNum != 0) {
        int digit = originalNum % 10;
        result += calculateFactorialRecursively(digit);
        originalNum /= 10;
    }

    return (result == num) ? 1 : 0;
}

// Helper function for reversing digits recursively
int reverseRecursively(int num, int reversedNum) {
    if (num == 0) {
        return reversedNum;
    } else {
        return reverseRecursively(num / 10, reversedNum * 10 + num % 10);
    }
}

// Main function for checking palindrome using recursion
 int isPalindrome(int num) {
    int reversed = reverseRecursively(num, 0);
    return (num == reversed);
}

