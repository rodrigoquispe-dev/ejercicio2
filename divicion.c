#include <stdio.h>

float dividirCarlosMangudo(int a, int b){
    
    if(b == 0){
        printf("no se puede dividir entre 0\n");
        return 0;
    }

    return (float)a / b;
}

int main(){
    
    int a = 10;
    int b = 2;

    float resultado = dividirCarlosMangudo(a, b);

    printf("Resultado: %.2f\n", resultado);

    return 0;
}