#include <stdio.h>

// Function to calculate power recursively
int power_recursive(int base, int exponent) {
    if (exponent == 0) {
        return 1;
    } else {
        return base * power_recursive(base, exponent - 1);
    }
}

// Function to calculate power iteratively
int power_iterative(int base, int exponent) {
    int result = 1;
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}

int main() {
    int base, exp, choice;
    
    printf("Enter base: ");
    scanf("%d", &base);
    
    printf("Enter exponent (non-negative): ");
    scanf("%d", &exp);

    // Input validation
    if (exp < 0) {
        printf("Invalid input! Exponent must be a non-negative integer.\n");
        return 1;
    }

    printf("Choose the method: 1 for Recursive, 2 for Iterative: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("%d raised to the power of %d using recursion is %d\n", base, exp, power_recursive(base, exp));
    } else if (choice == 2) {
        printf("%d raised to the power of %d using iteration is %d\n", base, exp, power_iterative(base, exp));
    } else {
        printf("Invalid choice!\n");
    }

    return 0;
}
