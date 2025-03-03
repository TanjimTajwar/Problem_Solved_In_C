#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_TEAMS 200

// Structure to store team details
typedef struct {
    char team_name[50];
    char members[3][50];
    char institute[100];
    int problems_solved;
} Team;

// Function to decide the champion team
Team DecideChampion(Team teams[], int count) {
    Team champion = teams[0];
    for (int i = 1; i < count; i++) {
        if (teams[i].problems_solved > champion.problems_solved) {
            champion = teams[i];
        }
    }
    return champion;
}

int main() {
    Team teams[MAX_TEAMS];
    FILE *file;
    int num_teams;
    
    printf("Enter number of participating teams: ");
    scanf("%d", &num_teams);
    getchar(); // Consume newline character

    // Taking input for the teams
    for (int i = 0; i < num_teams; i++) {
        printf("Enter team name: ");
        fgets(teams[i].team_name, 50, stdin);
        teams[i].team_name[strcspn(teams[i].team_name, "\n")] = 0;
        
        printf("Enter names of three team members: ");
        for (int j = 0; j < 3; j++) {
            scanf("%s", teams[i].members[j]);
        }
        getchar(); // Consume newline character

        printf("Enter name of the educational institute: ");
        fgets(teams[i].institute, 100, stdin);
        teams[i].institute[strcspn(teams[i].institute, "\n")] = 0;
        
        printf("Enter number of problems solved: ");
        scanf("%d", &teams[i].problems_solved);
        getchar(); // Consume newline character
    }
    
    // Deciding the champion team
    Team champion = DecideChampion(teams, num_teams);
    
    // Creating and writing champion team details to a file
    file = fopen("Champion.txt", "w");
    if (file == NULL) {
        printf("Error creating file!\n");
        return 1;
    }
    fprintf(file, "Champion Team: %s\n", champion.team_name);
    fprintf(file, "Team Members: %s, %s, %s\n", champion.members[0], champion.members[1], champion.members[2]);
    fprintf(file, "Educational Institute: %s\n", champion.institute);
    fprintf(file, "Problems Solved: %d\n", champion.problems_solved);
    fclose(file);
    
    printf("Champion team details written to Champion.txt in the same directory as this program.\n");
    return 0;
}