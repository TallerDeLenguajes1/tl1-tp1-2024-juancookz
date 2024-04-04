#include <stdio.h>
int cuadradoNum(int num);
int main()
{
    int numero;
    printf("Ingrese un numero:");
    scanf("%d",&numero);
    printf("\nEl numero al cuadrado es %d", cuadradoNum(numero));
    return 0;
}
int cuadradoNum(int num){
    return num*num;
}