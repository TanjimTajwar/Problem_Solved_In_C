#include <stdio.h>
#include <string.h>

#define MAX_USERNAME_LEN 50
#define MAX_PASSWORD_LEN 50

int main() {
    char username[MAX_USERNAME_LEN];
    char password[MAX_PASSWORD_LEN];
    char correctUsername[] = "user123";
    char correctPassword[] = "pass123";

    // Get username and password input from user
    printf("Enter username: ");
    fgets(username, MAX_USERNAME_LEN, stdin);
    // Remove trailing newline
    username[strcspn(username, "\n")] = '\0';

    printf("Enter password: ");
    fgets(password, MAX_PASSWORD_LEN, stdin);
    // Remove trailing newline
    password[strcspn(password, "\n")] = '\0';

    // Check if username and password match
    if (strcmp(username, correctUsername) == 0 && strcmp(password, correctPassword) == 0) {
        printf("Login successful!\n");
    } else {
        printf("Invalid username or password.\n");
    }

    return 0;
}
