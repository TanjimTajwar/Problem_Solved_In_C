/*
    A prime number is a natural number greater than 1 that has no positive divisors other than 1 and itself. For example, 5 is a prime number, but 6 is not.
*/
#include <stdio.h>

int main() {
    int n, isPrime = 1;  // Assume the number is prime
    printf("Enter a number: ");
    scanf("%d", &n);

    // Loop to check divisibility from 2 to sqrt(n)
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {  // If n is divisible by i, it's not prime
            isPrime = 0;
            break;
        }
    }

    // Output the result
    if (isPrime && n > 1) {
        printf("%d is a prime number.\n", n);
    } else {
        printf("%d is not a prime number.\n", n);
    }

    return 0;
}
