#include <stdio.h>

int main() {
    int i = 1;

    // For loop: Prints numbers from 1 to 10
    printf("Using For loop:\n");
    for (i = 1; i <= 10; i++) {
        printf("%d ", i);
    }
    printf("\n");

    // While loop: Prints numbers from 1 to 10
    printf("Using While loop:\n");
    i = 1;  // Reset i
    while (i <= 10) {
        printf("%d ", i);
        i++;
    }
    printf("\n");

    // Do-While loop: Prints numbers from 1 to 10
    printf("Using Do-While loop:\n");
    i = 1;  // Reset i
    do {
        printf("%d ", i);
        i++;
    } while (i <= 10);
    printf("\n");

    return 0;
}
