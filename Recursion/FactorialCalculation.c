#include <stdio.h>

// Recursive function to calculate factorial
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;  // Base case: factorial of 0 or 1 is 1
    } else {
        return n * factorial(n - 1);  // Recursive case
    }
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    // Call recursive factorial function
    int result = factorial(num);

    printf("Factorial of %d is: %d\n", num, result);

    return 0;
}
