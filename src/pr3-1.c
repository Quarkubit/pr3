#include <stdio.h>

int main() {
    int a;
    int b;

    printf("a = ");
    scanf("%d", &a);
    printf("b =  ");
    scanf("%d", &b);

    int *ptrA = &a;
    int *ptrB = &b;

    *ptrA *= 2;

    *ptrB /= 2;

    printf("New a = %d\n", a);
    printf("New b = %d\n", b);

    return 0;
}
