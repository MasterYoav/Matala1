#include "NumClass.h"

// Function to check if a number is prime
int isPrime(int n) {
    if (n <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0; 
        }
    }
    return 1;
}

// Function to check if a number is strong
int isStrong(int n) {
    int originalNum = n;
    int sum = 0;
    while (n > 0) {
        int digit = n % 10;
        int factorial = 1;
        for (int i = 1; i <= digit; i++) {
            factorial *= i;
        }
        sum += factorial;
        n /= 10;
    }
    return (sum == originalNum) ? 1 : 0; // If the sum equals the original number, it's a strong number
}
