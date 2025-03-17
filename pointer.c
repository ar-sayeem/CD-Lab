#include <stdio.h>

void fun(int *a, int *b)
{
    (*a)++;
    (*b)++;
    printf("a = %d b = %d\n", *a, *b);
    printf("Address: a = %d b = %d\n", a, b);

}

int main() {
    int a = 5, b = 6;
    printf("a = %d b = %d\n", a, b);
    fun(&a, &b);
    printf("a = %d b = %d\n", a, b);

    return 0;
}
