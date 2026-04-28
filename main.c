#include <stdio.h>
#include "sumar.h"
#include "resta.h"
#include "multiplicacion.h"
#include "division.h"

int main(int argc, char const * argv[])
{
    int a, b;
    printf("Ingrese 1er numero: ");
    scanf("%d", &a);
    printf("Ingrese 2do numero: ");
    scanf("%d", &b);
    int resultado = sumar(a, b);
    printf("La suma es: %d\n", sumar(a,b));
    int resultr = resta(a, b);
    printf("La resta es: %d\n", resultr);
    int resultm = multiplicacion(a,b);
    printf("La multiplicacion es: %d\n", resultm);
    float resultd = division(a,b);
    printf("La division es: %.2f\n", resultd);
    return 0;
}