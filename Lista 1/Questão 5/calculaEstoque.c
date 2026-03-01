#include <stdio.h>

void calculaValorEstoque(float precoUnitario, int qtd) {
    float valorTotal = precoUnitario * qtd;
    printf("Valor em estoque: R$ %.2f\n", valorTotal);
}

int main() {
    float preco;
    int qtd;
    
    printf("Digite o preco unitario: ");
    scanf("%f", &preco);
    printf("Digite a quantidade em estoque: ");
    scanf("%d", &qtd);

    calculaValorEstoque(preco, qtd);
    return 0;
}
