#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello, World!";
    char *ptr = strstr(str, "World");
    
    if (ptr != NULL) {
        printf("Found substring: %s\n", ptr);  // Output: World!
    } else {
        printf("Substring not found.\n");
    }
    return 0;
}
