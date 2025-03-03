#include <stdio.h>
#include <dirent.h>
#include <stdlib.h>

// Recursive function to list files in a directory
void listFilesRecursively(const char *dirPath) {
    struct dirent *entry;
    DIR *dir = opendir(dirPath);

    if (dir == NULL) {
        perror("opendir");
        return;
    }

    // Loop through the directory contents
    while ((entry = readdir(dir)) != NULL) {
        // Skip the current and parent directory links
        if (entry->d_name[0] == '.') {
            continue;
        }

        printf("%s\n", entry->d_name);

        // If the entry is a directory, recurse into it
        if (entry->d_type == DT_DIR) {
            char subDirPath[256];
            snprintf(subDirPath, sizeof(subDirPath), "%s/%s", dirPath, entry->d_name);
            listFilesRecursively(subDirPath);
        }
    }

    closedir(dir);
}

int main() {
    char path[256];
    printf("Enter the directory path: ");
    scanf("%s", path);

    // Call the recursive function to list files
    listFilesRecursively(path);

    return 0;
}
