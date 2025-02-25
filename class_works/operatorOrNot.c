#include <stdio.h>
#include <string.h>

int main() {
    char str[10];

    printf("Enter an Operator: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    size_t L = strlen(str);             // size_t is an unsigned integer type
    if (L > 0 && str[L - 1] == '\n') {
        str[L - 1] = '\0';              // "+\n\0"
        L--;  // Adjust length
    }

    if (L == 1) {
        if (str[0] == '+') printf("Addition Operator\n");
        else if (str[0] == '-') printf("Subtraction Operator\n");
        else if (str[0] == '*') printf("Multiplication Operator\n");
        else if (str[0] == '/') printf("Division Operator\n");
        else if (str[0] == '%') printf("Modulus Operator\n");
        else if (str[0] == '=') printf("Assignment Operator\n");
        else if (str[0] == '&') printf("Bitwise AND Operator\n");
        else if (str[0] == '|') printf("Bitwise OR Operator\n");
        else if (str[0] == '^') printf("Bitwise XOR Operator\n");
        else if (str[0] == '~') printf("Bitwise NOT Operator\n");
        else if (str[0] == '<') printf("Less Than Operator\n");
        else if (str[0] == '>') printf("Greater Than Operator\n");
        else if (str[0] == '!') printf("Logical NOT Operator\n");
        else printf("Not an Operator\n");
    } 
    else if (L == 2) {
        if (str[0] == '+' && str[1] == '+') printf("Increment Operator\n");
        else if (str[0] == '-' && str[1] == '-') printf("Decrement Operator\n");
        else if (str[0] == '&' && str[1] == '&') printf("Logical AND Operator\n");
        else if (str[0] == '|' && str[1] == '|') printf("Logical OR Operator\n");
        else if (str[0] == '=' && str[1] == '=') printf("Equal to Operator\n");
        else if (str[0] == '!' && str[1] == '=') printf("Not Equal to Operator\n");
        else if (str[0] == '<' && str[1] == '=') printf("Less Than or Equal to Operator\n");
        else if (str[0] == '>' && str[1] == '=') printf("Greater Than or Equal to Operator\n");
        else if (str[0] == '<' && str[1] == '<') printf("Left Shift Operator\n");
        else if (str[0] == '>' && str[1] == '>') printf("Right Shift Operator\n");
        else if (str[0] == '+' && str[1] == '=') printf("Addition Assignment Operator\n");
        else if (str[0] == '-' && str[1] == '=') printf("Subtraction Assignment Operator\n");
        else if (str[0] == '*' && str[1] == '=') printf("Multiplication Assignment Operator\n");
        else if (str[0] == '/' && str[1] == '=') printf("Division Assignment Operator\n");
        else if (str[0] == '%' && str[1] == '=') printf("Modulus Assignment Operator\n");
        else if (str[0] == '&' && str[1] == '=') printf("Bitwise AND Assignment Operator\n");
        else if (str[0] == '|' && str[1] == '=') printf("Bitwise OR Assignment Operator\n");
        else if (str[0] == '^' && str[1] == '=') printf("Bitwise XOR Assignment Operator\n");
        else if (str[0] == '-' && str[1] == '>') printf("Structure Pointer Operator\n");
        else printf("Not an Operator\n");
    }
    else if (L == 3) {
        if (str[0] == '<' && str[1] == '<' && str[2] == '=') printf("Left Shift Assignment Operator\n");
        else if (str[0] == '>' && str[1] == '>' && str[2] == '=') printf("Right Shift Assignment Operator\n");
        else if (str[0] == '?' && str[1] == ':' ) printf("Ternary Operator\n");
        else printf("Not an Operator\n");
    }
    else {
        printf("Not an Operator\n");
    }

    return 0;
}
