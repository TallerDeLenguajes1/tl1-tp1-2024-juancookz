#include <stdio.h>
int main()
{
    float pi = 3.1415;
    float *ptr;
    ptr = &pi;
    printf("Hola mundo\n");
    printf("El puntero contiene: %f", *ptr);
    printf("\nDireccion de memoria almacenada por el puntero: %p", ptr);
    printf("\nDireccion de memoria de la variable: %p", &pi);
    printf("\nDireccion de memoria del puntero: %p", &ptr);
    printf("\nTamanio de la variable: %d bytes", (int *)sizeof(pi));
    
    return 0;
}
