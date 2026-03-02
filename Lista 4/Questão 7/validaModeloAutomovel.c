#include <stdio.h>

int leValidaQtd() {
    int qtd;

    do {
        printf("Digite a quantidade de modelos de automoveis: ");
        scanf("%d", &qtd);

        if (qtd <= 0) {
            printf("Quantidade invalida! Digite novamente.\n");
        }
    } while (qtd <= 0);

    return qtd;
}

float processaModelos(int qtd) {
    int i, codigo, qtdFabricada;
    float preco, valorEstoque;
    float totalEstoque = 0;

    for (i = 1; i <= qtd; i++) {
        printf("\nModelo %d\n", i);
        printf("Codigo do modelo: ");
        scanf("%d", &codigo);
        printf("Preco do automovel: ");
        scanf("%f", &preco);
        printf("Quantidade fabricada: ");
        scanf("%d", &qtdFabricada);

        valorEstoque = preco * qtdFabricada;

        printf("Codigo: %d\n", codigo);
        printf("Valor em estoque do modelo: %.2f\n", valorEstoque);

        totalEstoque += valorEstoque;
    }

    return totalEstoque;
}

int main() {
    int qtd;
    float total;

    qtd = leValidaQtd();
    total = processaModelos(qtd);

    printf("\nValor total em estoque da fabrica: %.2f\n", total);

    return 0;
}
