#include <stdio.h>

int key() {
    printf("It's a keyword.\n");
}

int main() {
    char str[20];
    while(1){
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }
    if(str[0] == '-' && str[1] == '1' && str[2] == '\0'){
        return 0;
    }else if (str[0] == 'a' && str[1] == 'u' && str[2] == 't' && str[3] == 'o' && str[4] == '\0') {
        key();
    } else if (str[0] == 'b' && str[1] == 'r' && str[2] == 'e' && str[3] == 'a' && str[4] == 'k' && str[5] == '\0') {
        key();
    } else if (str[0] == 'c' && str[1] == 'a' && str[2] == 's' && str[3] == 'e' && str[4] == '\0') {
        key();
    } else if (str[0] == 'c' && str[1] == 'h' && str[2] == 'a' && str[3] == 'r' && str[4] == '\0') {
        key();
    } else if (str[0] == 'c' && str[1] == 'o' && str[2] == 'n' && str[3] == 's' && str[4] == 't' && str[5] == '\0') {
        key();
    } else if (str[0] == 'c' && str[1] == 'o' && str[2] == 'n' && str[3] == 't' && str[4] == 'i' && str[5] == 'n' && str[6] == 'u' && str[7] == 'e' && str[8] == '\0') {
        key();
    } else if (str[0] == 'd' && str[1] == 'e' && str[2] == 'f' && str[3] == 'a' && str[4] == 'u' && str[5] == 'l' && str[6] == 't' && str[7] == '\0') {
        key();
    } else if (str[0] == 'd' && str[1] == 'o' && str[2] == '\0') {
        key();
    } else if (str[0] == 'd' && str[1] == 'o' && str[2] == 'u' && str[3] == 'b' && str[4] == 'l' && str[5] == 'e' && str[6] == '\0') {
        key();
    } else if (str[0] == 'e' && str[1] == 'l' && str[2] == 's' && str[3] == 'e' && str[4] == '\0') {
        key();
    } else if (str[0] == 'e' && str[1] == 'n' && str[2] == 'u' && str[3] == 'm' && str[4] == '\0') {
        key();
    } else if (str[0] == 'e' && str[1] == 'x' && str[2] == 't' && str[3] == 'e' && str[4] == 'r' && str[5] == 'n' && str[6] == '\0') {
        key();
    } else if (str[0] == 'f' && str[1] == 'l' && str[2] == 'o' && str[3] == 'a' && str[4] == 't' && str[5] == '\0') {
        key();
    } else if (str[0] == 'f' && str[1] == 'o' && str[2] == 'r' && str[3] == '\0') {
        key();
    } else if (str[0] == 'g' && str[1] == 'o' && str[2] == 't' && str[3] == 'o' && str[4] == '\0') {
        key();
    } else if (str[0] == 'i' && str[1] == 'f' && str[2] == '\0') {
        key();
    } else if (str[0] == 'i' && str[1] == 'n' && str[2] == 't' && str[3] == '\0') {
        key();
    } else if (str[0] == 'l' && str[1] == 'o' && str[2] == 'n' && str[3] == 'g' && str[4] == '\0') {
        key();
    } else if (str[0] == 'r' && str[1] == 'e' && str[2] == 'g' && str[3] == 'i' && str[4] == 's' && str[5] == 't' && str[6] == 'e' && str[7] == 'r' && str[8] == '\0') {
        key();
    } else if (str[0] == 'r' && str[1] == 'e' && str[2] == 't' && str[3] == 'u' && str[4] == 'r' && str[5] == 'n' && str[6] == '\0') {
        key();
    } else if (str[0] == 's' && str[1] == 'h' && str[2] == 'o' && str[3] == 'r' && str[4] == 't' && str[5] == '\0') {
        key();
    } else if (str[0] == 's' && str[1] == 'i' && str[2] == 'g' && str[3] == 'n' && str[4] == 'e' && str[5] == 'd' && str[6] == '\0') {
        key();
    } else if (str[0] == 's' && str[1] == 'i' && str[2] == 'z' && str[3] == 'e' && str[4] == 'o' && str[5] == 'f' && str[6] == '\0') {
        key();
    } else if (str[0] == 's' && str[1] == 't' && str[2] == 'a' && str[3] == 't' && str[4] == 'i' && str[5] == 'c' && str[6] == '\0') {
        key();
    } else if (str[0] == 's' && str[1] == 't' && str[2] == 'r' && str[3] == 'u' && str[4] == 'c' && str[5] == 't' && str[6] == '\0') {
        key();
    } else if (str[0] == 's' && str[1] == 'w' && str[2] == 'i' && str[3] == 't' && str[4] == 'c' && str[5] == 'h' && str[6] == '\0') {
        key();
    } else if (str[0] == 't' && str[1] == 'y' && str[2] == 'p' && str[3] == 'e' && str[4] == 'd' && str[5] == '\0') {
        key();
    } else if (str[0] == 'u' && str[1] == 'n' && str[2] == 'i' && str[3] == 'o' && str[4] == 'n' && str[5] == '\0') {
        key();
    } else if (str[0] == 'u' && str[1] == 'n' && str[2] == 's' && str[3] == 'i' && str[4] == 'g' && str[5] == 'n' && str[6] == 'e' && str[7] == 'd' && str[8] == '\0') {
        key();
    } else if (str[0] == 'v' && str[1] == 'o' && str[2] == 'i' && str[3] == 'd' && str[4] == '\0') {
        key();
    } else if (str[0] == 'v' && str[1] == 'o' && str[2] == 'l' && str[3] == 'a' && str[4] == 't' && str[5] == 'i' && str[6] == 'l' && str[7] == 'e' && str[8] == '\0') {
        key();
    } else if (str[0] == 'w' && str[1] == 'h' && str[2] == 'i' && str[3] == 'l' && str[4] == 'e' && str[5] == '\0') {
        key();
    } else {
        printf("It's not a keyword.\n");
    }
    }

    return 0;
}
