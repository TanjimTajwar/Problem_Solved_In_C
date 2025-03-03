#include <stdio.h>
#include <string.h>

int main() {
    char source[] = "Hello";
    char destination[20];

    strcpy(destination, source);
    printf("Destination: %s\n", destination);  // Output: Hello
    return 0;
}
