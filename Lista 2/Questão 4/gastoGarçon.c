#include <stdio.h>
float calculaValorGarcom(float g) {
    float valorGarcom = g * 0.10;
    printf("Valor do garcom: %.2f\n", valorGarcom);
    return valorGarcom;
}

float calculaValorTotal(float g, float valorGarcom) {
    float total = g + valorGarcom;
    printf("Valor total a pagar: %.2f\n", total);
}

int main() {
    float gasto, valorG;

    printf("Digite o valor gasto no restaurante: ");
    scanf("%f", &gasto);

    valorG = calculaValorGarcom(gasto);
    calculaValorTotal(gasto, valorG);
    return 0;
}
