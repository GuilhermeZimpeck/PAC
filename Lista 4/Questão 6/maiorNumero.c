#include <stdio.h>

int maiorNumero(int qtd) {
    int i, n, maior;

    printf("Digite o 1º numero: ");
    scanf("%d", &maior);

    for (i = 1; i < qtd; i++) {
        printf("Digite o %dº numero: ", i+1);
        scanf("%d", &n);

        if (n > maior)
            maior = n;
    }

    return maior;
}

int main() {
    int qtd, maior;

    printf("Digite a quantidade de numeros: ");
    scanf("%d", &qtd);

    maior = maiorNumero(qtd);

    printf("Maior numero digitado: %d\n", maior);
    return 0;
}
