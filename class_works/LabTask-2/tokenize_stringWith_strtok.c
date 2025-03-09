#include <stdio.h>
#include <string.h>

int main() {
    char str[100], *token;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    token = strtok(str, " "); // Tokenize based on spaces
    while (token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, " ");
    }

    return 0;
}
