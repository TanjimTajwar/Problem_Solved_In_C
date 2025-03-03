/*
    S=1+2+3+⋯+n
*/
#include <stdio.h>

int main() {
    int n, sum = 0;
    
    // Input the value of n
    printf("Enter a number: ");
    scanf("%d", &n);

    // Loop to calculate the sum
    for (int i = 1; i <= n; i++) {
        sum += i;  // Add i to sum in each iteration
    }

    // Output the result
    printf("The sum of first %d natural numbers is: %d\n", n, sum);

    return 0;
}
