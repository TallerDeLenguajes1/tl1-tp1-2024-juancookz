#include <stdio.h>
void orden(int *a, int *b);
int main()
{
    int a, b;
    printf("\nIngrese a:");
    scanf("%d", &a);
    printf("\nIngrese b:");
    scanf("%d", &b);
    orden(&a, &b);
    printf("\nMayor: %d", a);
    printf("\nMenor: %d", b);
    return 0;
}
void orden(int *a, int *b)
{
    int num1 = *a;
    int num2 = *b;
    if (num1 < num2)
    {
        *b = num1;
        *a = num2;
    }
}