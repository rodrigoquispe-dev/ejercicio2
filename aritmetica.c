#include <stdio.h>

// Funcion de Luis Huanca Mamani

  GNU nano 8.7                                 aritmetica.c                                  Modified
#include <stdio.h>

// Funcion de Luis Huanca Mamani


double valorAbsoluto(double numero){

	if(numero < 0)
		return -numero;
	else
		return numero;
}
//gonzalo raiz cuadrada
#include <math.h>
int main() {
    double numero = 64.0;
    // Elevamos a la 1/3
    double resultado = pow(numero, 1.0/3.0);

    printf("La raiz cubica de %.2f es %.2f\n", numero, resultado);
    return 0;
}
//gonzalo raiz cuadrada

//Funcion de Dividir Carlos Mangudo

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


// Funcion Resta de Jose Pardo
int restaJosePardo(int a, int b){
    return a - b;
}

int main(){
    int r;

    r = restaJosePardo(10, 4);
    printf("Resultado Resta Jose Pardo: %d\n", r);

    return 0;
}


#include <stdio.h>

// Funcion de Rodrigo Quispe Vargas
int sumaRodrigoQuispe(int a, int b){
    return a + b;
}

int main(){

    int r;

    r = sumaRodrigoQuispe(5,3);

    printf("Resultado: %d", r);

    return 0;
}

#include <stdio.h>

// Funcion de Vladimir Camacho Cabrera
int calcularModulo(int a, int b) {
    // Metodo de Vladimir Camacho Cabrera
    int res = a % b;
    printf("El modulo es: %d\n", res);
    return res;
}

int main() {

    int a = 17;
    int b = 5;
    int resultado = calcularModulo(a, b);
    return 0;
}








































^G Help       ^O Write Out  ^F Where Is   ^K Cut        ^T Execute    ^C Location   M-U Undo
^X Exit       ^R Read File  ^\ Replace    ^U Paste      ^J Justify    ^/ Go To Line M-E Redo
