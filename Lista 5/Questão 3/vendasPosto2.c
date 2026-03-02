#include <stdio.h>
void umPosto(int qtdVendas, float *maiorAlcool, float *maiorGasolina, float *maiorDiesel) {
    char tipo;
    float valor;
    *maiorAlcool = 0;
    *maiorGasolina = 0;
    *maiorDiesel = 0;
    int i = 0;
    
    while(i < qtdVendas) {
        printf("\nVenda %d\n", i + 1);
        printf("Tipo de combustivel (A - alcool, G - gasolina, D - diesel): ");
        scanf(" %c", &tipo);

        printf("Valor da venda: R$ ");
        scanf("%f", &valor);

        if (tipo == 'A') {
            if (valor >*maiorAlcool)
                *maiorAlcool = valor;
        } else if (tipo == 'G') {
            if (valor >*maiorGasolina)
                *maiorGasolina = valor;
        } else if (tipo == 'D') {
            if (valor >*maiorDiesel)
                *maiorDiesel = valor;
        } else {
            printf("Tipo de combustivel invalido!\n");
            i = i - 1;
        }
    i += 1;
    }
}

int main() {
    int codigo, qtd;
    float maiorAlcool, maiorGasolina, maiorDiesel;
    
    printf("Digite o codigo do posto (0 para encerrar): ");
    scanf("%d", &codigo);
    
    while (codigo !=0) {
        printf("Digite a quantidade de vendas do posto %d: ", codigo);
        scanf("%d", &qtd);
        
        umPosto(qtd, &maiorAlcool, &maiorGasolina, &maiorDiesel);
        
        printf("\nO posto %d teve as segintes vendas\n", codigo);
        printf("Maior venda de Alcool  : R$ %.2f\n", maiorAlcool);
        printf("Maior venda de Gasolina: R$ %.2f\n", maiorGasolina);
        printf("Maior venda de Diesel  : R$ %.2f\n", maiorDiesel);
        printf("\nDigite o codigo do posto (0 para encerrar): ");
        scanf("%d", &codigo);
    }
    return 0;
}
