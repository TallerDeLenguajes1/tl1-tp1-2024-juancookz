#include <stdio.h>
void cuadradoNum(int num, int *res);
int main()
{
    int numero, res;
    printf("Ingrese un numero:");
    scanf("%d",&numero);
    cuadradoNum(numero, &res);
    printf("El cuadrado del numero es: %d", res);
    return 0;
}
void cuadradoNum(int num, int *res){
    *res = num*num;
}