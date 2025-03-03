#include <stdio.h>

// Recursive function to calculate nth Fibonacci number
int fibonacci(int n) {
    if (n == 0) {
        return 0;  // Base case: F(0) = 0
    } else if (n == 1) {
        return 1;  // Base case: F(1) = 1
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);  // Recursive case
    }
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    // Call recursive Fibonacci function
    int result = fibonacci(num);

    printf("Fibonacci number at position %d is: %d\n", num, result);

    return 0;
}
