#include <stdio.h>
void contabilizaVenda(float valor, float *ate2000, float *acima2000) {
    if (valor <= 2000.0)
        *ate2000 += valor;
    else
        *acima2000 += valor;
}

int main() {
    float precoAlcool, precoGasolina, litros, valorVenda;
    char tipo;
    float totalAlcool = 0, totalGasolina = 0;
    float ate2000 = 0, acima2000 = 0;

    printf("Digite o preco do litro do alcool: ");
    scanf("%f", &precoAlcool);

    printf("Digite o preco do litro da gasolina: ");
    scanf("%f", &precoGasolina);

    printf("\nDigite as vendas (A álcool, G gasolina, X para sair)\n");

    while (tipo != 'X') {
        printf("\nTipo de combustivel (A/G/X): ");
        scanf(" %c", &tipo);

        if (tipo == 'X')
            break;

        printf("Quantidade de litros: ");
        scanf("%f", &litros);

        if (tipo == 'A') {
            valorVenda = litros *precoAlcool;
            totalAlcool += valorVenda;
        } else if (tipo == 'G') {
            valorVenda = litros * precoGasolina;
            totalGasolina += valorVenda;
        } else {
            printf("Tipo invalido!\n");
        printf("\nDigite as vendas (A álcool, G gasolina, X para sair)\n");
        }
        contabilizaVenda(valorVenda, &ate2000, &acima2000);
    }
    printf("Total vendido em Alcool  : R$ %.2f\n", totalAlcool);
    printf("Total vendido em Gasolina: R$ %.2f\n", totalGasolina);
    printf("Vendas ate 2000,00       : R$ %.2f\n", ate2000);
    printf("Vendas acima de 2000,00  : R$ %.2f\n", acima2000);

    return 0;
}
