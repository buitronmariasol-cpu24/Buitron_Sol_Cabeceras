#include <stdio.h>
#include "sumar.h"

int main(int argc, char const * argv[])
{
    int a, b;
    printf("Ingrese 1er numero: ");
    scanf("%d", &a);
    printf("Ingrese 2do numero: ");
    scanf("%d", &b);
    printf("La suma es: %d", sumar(a,b));
    return 0;
}