#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello, World!";
    char *ptr = strchr(str, 'o');
    
    if (ptr != NULL) {
        printf("Found character 'o' at position: %ld\n", ptr - str);  // Output: 4
    } else {
        printf("Character not found.\n");
    }
    return 0;
}
