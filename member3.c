#include <stdio.h>

#define MAX 1000

// Memoization array
int memo[MAX];

// Function to initialize memoization array
void initialize_memo() {
    for (int i = 0; i < MAX; i++) {
        memo[i] = -1;
    }
}

// Recursive Fibonacci with memoization
int fibonacci_memo(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else if (memo[n] != -1) {
        return memo[n];
    } else {
        memo[n] = fibonacci_memo(n - 1) + fibonacci_memo(n - 2);
        return memo[n];
    }
}

// Iterative Fibonacci
int fibonacci_iterative(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    }
    
    int a = 0, b = 1, c;
    for (int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main() {
    int n, choice;
    
    printf("Enter the position in Fibonacci sequence (non-negative): ");
    scanf("%d", &n);

    // Input validation
    if (n < 0) {
        printf("Invalid input! Position must be a non-negative integer.\n");
        return 1;
    }

    printf("Choose the method: 1 for Recursive with Memoization, 2 for Iterative: ");
    scanf("%d", &choice);

    if (choice == 1) {
        initialize_memo();
        printf("Fibonacci number at position %d using recursion with memoization is %d\n", n, fibonacci_memo(n));
    } else if (choice == 2) {
        printf("Fibonacci number at position %d using iteration is %d\n", n, fibonacci_iterative(n));
    } else {
        printf("Invalid choice!\n");
    }

    return 0;
}
