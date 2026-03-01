#include <stdio.h>

float leCalcAumento(float sal, float percent) {
    float aumento,novoSal;
    aumento = sal * (percent / 100);
    novoSal = sal + aumento;
    return novoSal;
}

int main() {
    float salario, percentual, novoSalario;

    printf("Digite o salario atual: ");
    scanf("%f", &salario);
    printf("Digite o percentual de aumento: ");
    scanf("%f", &percentual);

    novoSalario = leCalcAumento(salario, percentual);

    printf("Novo salario: %.2f\n", novoSalario);

    return 0;
}
