#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int n = 5;

    // Allocating memory using calloc (initializes to 0)
    arr = (int*) calloc(n, sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Printing the values (initialized to 0)
    printf("Allocated memory values using calloc:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // Freeing the allocated memory
    free(arr);

    return 0;
}
