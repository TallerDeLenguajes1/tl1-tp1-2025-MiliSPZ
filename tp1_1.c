#include <stdio.h>


int main()
{
    int variable = 21;
    int *punt = &variable;

    printf("\nContenido del puntero: %d", *punt);
    printf("\nDireccion de memoria almacenada por el puntero: %p", punt);
    printf("\nDireccion de memoria de la variable: %p", &variable);
    printf("\nDireccion de memoria del puntero: %p",&punt);
    printf("\nTamaño de memoria utilizado por esa variable %d", sizeof(variable));
    return 0;
}


