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
// Funcion Resta de Jose Pardo












































^G Help       ^O Write Out  ^F Where Is   ^K Cut        ^T Execute    ^C Location   M-U Undo
^X Exit       ^R Read File  ^\ Replace    ^U Paste      ^J Justify    ^/ Go To Line M-E Redo
