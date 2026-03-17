#includeint multiplicacionDeValoresTellezManuel(){
    int num1, num2;
    
    printf("Ingrese el primer numero: ");
    scanf("%d", &num1);
    
    printf("Ingrese el segundo numero: ");
    scanf("%d", &num2);
    
    int resultado = num1 * num2;
    return resultado;
}
int main(){
    int res;
    res = multiplicacionDeValoresTellezManuel();
    printf("El resultado de la multiplicacion es: %d\n", res);
    return 0;
}
