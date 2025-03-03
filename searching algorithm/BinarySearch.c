#include <stdio.h>

int binarySearch(int arr[], int n, int key) {
    int low = 0, high = n - 1, mid;
    
    while (low <= high) {
        mid = (low + high) / 2;
        
        if (arr[mid] == key) {
            return mid;  // Return index if the key is found
        } else if (arr[mid] < key) {
            low = mid + 1;  // Search in the right half
        } else {
            high = mid - 1;  // Search in the left half
        }
    }
    
    return -1;  // Return -1 if the key is not found
}

int main() {
    int n, key;

    // Input the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    // Input elements into the array
    printf("Enter %d sorted elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the element to search for
    printf("Enter the element to search for: ");
    scanf("%d", &key);

    // Perform Binary Search
    int result = binarySearch(arr, n, key);
    if (result != -1) {
        printf("Element %d found at index %d.\n", key, result);
    } else {
        printf("Element %d not found.\n", key);
    }

    return 0;
}
