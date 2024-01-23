
#include "NumClass.h"
//Function to check if a number is Armstrong using loops
int isArmstrong(int n) {
    int originalNum, remainder, result = 0, nDigits = 0;
    originalNum = n;
    while (originalNum != 0) {
        originalNum /= 10;
        ++nDigits;
    }
    originalNum = n;
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += power(remainder, nDigits);
        originalNum /= 10;
    }
    return (result == n) ? 1 : 0;
}
//Function to check if a number is Palindrome using loops
int isPalindrome(int n) {
    int reversedNum = 0, originalNum, remainder;
    originalNum = n;
    while (originalNum != 0) {
        remainder = originalNum % 10;
        reversedNum = reversedNum * 10 + remainder;
        originalNum /= 10;
    }
    return (reversedNum == n) ? 1 : 0;
}
int power(int base, int exponent) {
    int result = 1;
    while (exponent != 0) {
        result *= base;
        --exponent;
    }
    return result;
}
