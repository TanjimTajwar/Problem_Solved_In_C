/*
    *
   ***
  *****
 *******
*********
*/

#include <stdio.h>

int main() {
    int n;
    
    // Input the height of the pyramid
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    // Loop for each row
    for (int i = 1; i <= n; i++) {
        // Print spaces before the stars
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // Print stars in each row
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }

        printf("\n");  // Move to the next row
    }

    return 0;
}
