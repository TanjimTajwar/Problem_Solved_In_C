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
    // Printing the values
    printf("Allocated memory values using malloc:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    // Freeing the allocated memory
    free(arr);
    return 0;
}
