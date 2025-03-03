//Conventional Problem: Count Occurrences of a Specific Element in an Array
#include <stdio.h>

int main() {
    int n, element, count = 0;

    // Input the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    // Input elements into the array
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the element to count
    printf("Enter the element to count: ");
    scanf("%d", &element);

    // Count occurrences of the element
    for (int i = 0; i < n; i++) {
        if (arr[i] == element) {
            count++;
        }
    }

    // Output the result
    printf("Element %d appears %d times in the array.\n", element, count);

    return 0;
}
