#include <stdio.h>
void invertir(int *a, int *b);
int main()
{
    int a, b;
    printf("\nIngrese a:");
    scanf("%d", &a);
    printf("\nIngrese b:");
    scanf("%d", &b);
    invertir(&a, &b);
    printf("\na es: %d", a);
    printf("\nb es: %d", b);
    return 0;
}
void invertir(int *a, int *b)
{
    int c;
    c = *a;
    *a = *b;
    *b = c;
}