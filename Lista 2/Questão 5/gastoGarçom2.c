#include <stdio.h>
float calculaValorGarcom(float gasto) {
    float valorGarcom = gasto * 0.10;
    return valorGarcom;
}

float calculaValorTotal(float gasto) {
    float valorGarcom = calculaValorGarcom(gasto);
    float total = gasto + valorGarcom;
    return total;
}

int main() {
    float gasto, valorGarcom, total;
    printf("Digite o valor gasto no restaurante: ");
    scanf("%f", &gasto);
    valorGarcom = calculaValorGarcom(gasto);
    total = calculaValorTotal(gasto);

    printf("Valor do garcom: %.2f\n", valorGarcom);
    printf("Valor total a pagar: %.2f\n", total);
    return 0;
}
