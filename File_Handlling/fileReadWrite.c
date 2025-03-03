#include <stdio.h>
#include <stdlib.h>

void writeToFile(const char *filename) {
    FILE *file = fopen(filename, "w"); // Open file in write mode
    if (file == NULL) {
        perror("Error opening file");
        exit(1);
    }
    fprintf(file, "Hello my name is Arnab\n");
    fprintf(file, "I live in Chittagong\n");
    fclose(file); // Close the file
}

void readFromFile(const char *filename) {
    FILE *file = fopen(filename, "r"); // Open file in read mode
    if (file == NULL) {
        perror("Error opening file");
        exit(1);
    }
    char line[256];
    printf("\nContents of %s:\n", filename);
    while (fgets(line, sizeof(line), file)) { // Read file line by line
        printf("%s", line);
    }
    fclose(file); // Close the file
}

int main() {
    const char *filename = "data.txt";
    writeToFile(filename); // Writing to file
    readFromFile(filename); // Reading from file
    return 0;
}