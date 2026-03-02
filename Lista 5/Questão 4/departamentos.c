#include <stdio.h>

void umDepartamento(int qtdFunc, float *maiorSalario, int *qtdMaior) {
    float salario;
    int i;
    *maiorSalario = 0;
    *qtdMaior = 0;

    for (i = 0; i < qtdFunc; i++) {
        printf("Digite o salario do funcionario %d: ", i + 1);
        scanf("%f", &salario);

        if (i == 0 || salario > *maiorSalario) {
            *maiorSalario = salario;
            *qtdMaior = 1;
        } else if (salario == *maiorSalario) {
            (*qtdMaior)++;
        }
    }
}

int main() {
    int qtdDepartamentos, i, codigo, qtdFunc, qtdMaior;
    float maiorSalario;

    printf("Digite a quantidade de departamentos: ");
    scanf("%d", &qtdDepartamentos);

    for (i = 0; i < qtdDepartamentos; i++) {
        printf("\nDepartamento %d\n", i + 1);
        printf("Digite o codigo do departamento: ");
        scanf("%d", &codigo);
        printf("Digite a quantidade de funcionarios: ");
        scanf("%d", &qtdFunc);

        umDepartamento(qtdFunc, &maiorSalario, &qtdMaior);

        printf("\nDepartamento %d\n", codigo);
        printf("Maior salario: %.2f\n", maiorSalario);
        printf("Quantidade de funcionarios com o maior salario: %d\n", qtdMaior);
    }
    return 0;
}
