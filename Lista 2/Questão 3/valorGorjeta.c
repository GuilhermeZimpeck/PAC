#include <stdio.h>

float calculaValorGarcom (float num1){
    float gorjeta = num1 / 10;
    return gorjeta;
}

float calculaValorTotal (float X, float Y){
    float total = X + Y;
    return total;
}

int main(){
    float valorinicial;
    printf("digite o valor gasto pelo cliente no restaurante: ");
    scanf("%f", &valorinicial);
    
    float valorg = calculaValorGarcom(valorinicial);
    float valorf = calculaValorTotal(valorg,valorinicial);
    
    printf("\nO valor a ser pago ao garçom é: %.2f",valorg);
    printf("\nO valor total a ser pago é: %.2f",valorf);
    return 0;
}
