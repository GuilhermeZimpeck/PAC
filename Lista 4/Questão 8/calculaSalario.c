#include <stdio.h>

char menu() {
    char opcao;
    printf("H - Horista\nC - Contratado\nP - Prestador de servico\nF - Fim\nEscolha uma opcao: ");
    scanf(" %c", &opcao);

    return opcao;
}

float horista() {
    float valorHora, horas;

    printf("Valor da hora: ");
    scanf("%f", &valorHora);

    printf("Quantidade de horas trabalhadas: ");
    scanf("%f", &horas);

    return valorHora * horas;
}

float contratado() {
    float salario;

    printf("Digite o salario fixo: ");
    scanf("%f", &salario);

    return salario;
}

float prestador() {
    int qtdServicos, i;
    float valorServico;
    float total = 0;

    printf("Quantidade de servicos prestados: ");
    scanf("%d", &qtdServicos);

    for (i = 1; i <= qtdServicos; i++) {
        printf("Valor do servico %d: ", i);
        scanf("%f", &valorServico);
        total += valorServico;
    }

    return total;
}

int main() {
    char opcao;
    float salario;

    do {
        opcao = menu();

        switch (opcao) {
            case 'H':
                salario = horista();
                printf("\nSalario: %.2f\n\n", salario);
                break;

            case 'C':
                salario = contratado();
                printf("\nSalario: %.2f\n\n", salario);
                break;

            case 'P':
                salario = prestador();
                printf("\nSalario: %.2f\n\n", salario);
                break;
                
            case 'F':
                break;

            default:
                printf("Opcao invalida!\n");
        }

    } while (opcao != 'F');

    return 0;
}
