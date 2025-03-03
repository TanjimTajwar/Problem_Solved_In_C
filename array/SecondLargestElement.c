//Additional Problem: Find the Second Largest Element in an Array
#include <stdio.h>

int main() {
    int n;

    // Input the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    int largest, secondLargest;

    // Input elements into the array
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize largest and secondLargest
    if (n < 2) {
        printf("Array must contain at least two elements.\n");
        return 0;
    }

    largest = secondLargest = arr[0];
    if (arr[1] > largest) {
        largest = arr[1];
        secondLargest = arr[0];
    } else {
        secondLargest = arr[1];
    }

    // Loop through the array to find the second largest
    for (int i = 2; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    // Output the result
    printf("The second largest element is: %d\n", secondLargest);

    return 0;
}
