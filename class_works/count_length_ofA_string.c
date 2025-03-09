#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);     // Read input including spaces

    int l = strlen(str) - 1;       // To ignore the newline character from fgets reduce 1
    printf("Length of the string: %d\n", l);

    return 0;
}
