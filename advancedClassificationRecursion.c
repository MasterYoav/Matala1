#include "NumClass.h"
// Function to check if a number is Armstrong using recursion
int isArmstrong(int num) {
    static int originalN = num; 
    static int sum = 0;
    if (num != 0) {
        int digit = num % 10;
        sum += power(digit, 3); 
        isArmstrong(num / 10);
    } else {
        int result = (originalN == sum) ? 1 : 0;
        originalN = sum = 0;
        return result;
    }
}

// Function to check if a number is a palindrome using recursion
int isPalindrome(int num) {
    static int originalN = num; 
    static int reversedN = 0;
    if (num != 0) {
        int digit = num % 10;
        reversedN = reversedN * 10 + digit;
        isPalindrome(num / 10);
    } else {
        int result = (originalN == reversedN) ? 1 : 0;
        originalN = reversedN = 0;
        return result;
    }
}
