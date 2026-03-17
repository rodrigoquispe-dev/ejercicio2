#include <stdio.h>
#include <math.h>

int main() {
    double numero = 27.0;
    double resultado = cbrt(numero);

    printf("La raiz cubica de %.2f es %.2f\n", numero, resultado);
    return 0;
}