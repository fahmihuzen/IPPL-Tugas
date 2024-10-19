#include <stdio.h>

// Function to calculate factorial recursively
int factorial_recursive(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial_recursive(n - 1);
}

// Function to calculate factorial iteratively
int factorial_iterative(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int num, choice;
    printf("Enter a number to calculate factorial (non-negative): ");
    scanf("%d", &num);

    // Input validation
    if (num < 0) {
        printf("Invalid input! Factorial is not defined for negative numbers.\n");
        return 1;
    }

    printf("Choose the method: 1 for Recursive, 2 for Iterative: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Factorial of %d using recursion is %d\n", num, factorial_recursive(num));
    } else if (choice == 2) {
        printf("Factorial of %d using iteration is %d\n", num, factorial_iterative(num));
    } else {
        printf("Invalid choice!\n");
    }
    
    return 0;
}
