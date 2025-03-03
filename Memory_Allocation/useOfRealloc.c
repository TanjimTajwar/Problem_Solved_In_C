#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int n = 5;

    // Allocating memory using malloc
    arr = (int*) malloc(n * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Initializing the array
    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;
    }

    // Resizing the memory block using realloc
    n = 8;
    arr = (int*) realloc(arr, n * sizeof(int));

    if (arr == NULL) {
        printf("Memory reallocation failed!\n");
        return 1;
    }

    // Printing the values after realloc
    printf("Resized memory values using realloc:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // Freeing the allocated memory
    free(arr);

    return 0;
}
