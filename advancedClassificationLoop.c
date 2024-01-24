#include "NumClass.h"

// Function to calculate the factorial of a number
int calculateFactorial(int num) {
    int factorial = 1;
    for (int i = 1; i <= num; ++i) {
        factorial *= i;
    }
    return factorial;
}

int isArmstrong(int num) {
    int originalNum = num;
    int result = 0;
    int numDigits = 0;
    while (originalNum != 0) {
        originalNum /= 10;
        ++numDigits;
    }

    originalNum = num;

    // Calculate Armstrong sum
    while (originalNum != 0) {
        int digit = originalNum % 10;
        result += calculateFactorial(digit);
        originalNum /= 10;
    }
    return (result == num) ? 1 : 0;
}

int isPalindrome(int num) {
    int originalNum = num;
    int reversedNum = 0;

    // Reverse the number
    while (originalNum != 0) {
        reversedNum = reversedNum * 10 + originalNum % 10;
        originalNum /= 10;
    }

    return (num == reversedNum) ? 1 : 0;
}
