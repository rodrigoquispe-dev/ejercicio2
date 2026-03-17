#include <stdio.h>

// Funcion de Rodrigo Quispe Vargas
int sumaRodrigoQuispe(int a, int b){
    return a + b;
}
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

    r = sumaRodrigoQuispe(5,3);

    printf("Resultado: %d", r);
    
    r = potenciaMelodyGutierrez(2,3);
    printf("Resultado potencia: %d\n", r);

    return 0;
}