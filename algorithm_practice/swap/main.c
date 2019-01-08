#include <stdio.h>

void swap(int * a, int * b);
int main() {

    int a, b;

    scanf("%d %d", &a, &b);

    swap(&a, &b);
    printf("%d %d", a, b);

    return 0;
}

void swap(int * a, int * b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}