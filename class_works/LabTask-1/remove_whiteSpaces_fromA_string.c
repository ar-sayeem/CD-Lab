#include <stdio.h>

int main() {
    char str[100], newStr[100];
    int j = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ' && str[i] != '\n') {
            newStr[j++] = str[i];  // Copy only non-space characters
        }
    }
    newStr[j] = '\0'; // Add null character at the end

    printf("Without spaces: %s\n", newStr);
    return 0;
}
