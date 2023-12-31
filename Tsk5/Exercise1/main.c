#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_INPUT_LENGTH 1024

int executeCommand(char *command) {
    int result = system(command);
    printf("Exit code: %d\n", result);
    return result;
}

int main() {
    char input[MAX_INPUT_LENGTH];

    printf("Enter commands (type 'exit' to quit):\n");

    while (1) {
        printf("> ");
        if (fgets(input, sizeof(input), stdin) == NULL) {
            break;
        }

        input[strcspn(input, "\n")] = '\0';

        if (strcmp(input, "exit") == 0) {
            break;
        }

        char *token = strtok(input, ";");

        while (token != NULL) {
            printf("Executing command: %s\n", token);
            int result = executeCommand(token);
            token = strtok(NULL, ";");
        }
    }

    return 0;
}
