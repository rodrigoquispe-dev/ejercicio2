#include <stdio.h>

// Funcion de Melody Alejandra Gutierrez Caero
int potenciaMelodyGutierrez(int base, int exponente){

    int resultado = 1;

    for(int i = 0; i < exponente; i++){
        resultado = resultado * base;
    }

    return resultado;
}

int main(){

    int r;

    r = potenciaMelodyGutierrez(2,3);

    printf("Resultado: %d", r);

    return 0;
}