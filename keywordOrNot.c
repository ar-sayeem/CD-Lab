#include <stdio.h>
#include <string.h>

char *keywords[] = {
    "auto", "break", "case", "char", "const", "continue", "default", "do", "double", "else",
    "enum", "extern", "float", "for", "goto", "if", "inline", "int", "long", "register",
    "restrict", "return", "short", "signed", "sizeof", "static", "struct", "switch",
    "typedef", "union", "unsigned", "void", "volatile", "while"
};

int main() {
    char input[20];
    int isKeyword = 0;

    while (1) {
        printf("Enter a string (or -1 to exit): ");
        scanf("%s", input);

        if (strcmp(input, "-1") == 0) {
            break;
        }

        isKeyword = 0;
        for (int i = 0; i < 32; i++) {
            if (strcmp(input, keywords[i]) == 0) {
                isKeyword = 1;
                break;
            }
        }

        if (isKeyword) {
            printf("\"%s\" is a C keyword.\n", input);
        } else {
            printf("\"%s\" is not a C keyword.\n", input);
        }
    }

    return 0;
}
