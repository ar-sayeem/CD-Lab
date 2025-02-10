

#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];

    printf("Enter a sentence: ");
    fgets(s, sizeof(s), stdin);


    int L = strlen(s);

    if (s[0] == '/' && s[1] == '/') {
        printf("Single line comment\n");
    }
    else if ( s[1] == '*' && s[L - 3] == '*' && s[L - 2] == '/') {
        printf("Multiple line comment\n");
    }
    else {
        printf("Not a comment\n");
    }

    return 0;
}
