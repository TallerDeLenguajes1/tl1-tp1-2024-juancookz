#include <stdio.h>
void cuadradoNum(int num, int *res);
int main()
{
    int numero, res;
    printf("Ingrese un numero:");
    scanf("%d",&numero);
    printf("\nVariable recibida\nValor: %d\nDireccion: %p\n", numero, &numero);
    cuadradoNum(numero, &res);
    printf("\nVariable recibida\nValor: %d\nDireccion: %p\n", res, &res);
    printf("El cuadrado del numero es: %d", res);
    return 0;
}
void cuadradoNum(int num, int *res){
    *res = num*num;
}