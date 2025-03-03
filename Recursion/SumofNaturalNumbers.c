#include <stdio.h>

// Recursive function to calculate the sum of first n natural numbers
int sum(int n) {
    if (n == 0) {
        return 0;  // Base case: sum of first 0 numbers is 0
    } else {
        return n + sum(n - 1);  // Recursive case
    }
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    // Call recursive sum function
    int result = sum(num);

    printf("Sum of first %d natural numbers is: %d\n", num, result);

    return 0;
}
