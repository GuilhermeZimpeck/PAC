#include <stdio.h>
#define MAX 10573

typedef struct{
    int conta;
    float saldo;
}Cliente;

int leitura(Cliente v[], float *media){

    int i = 0;
    float soma = 0;

    printf("Digite o numero da conta (0 para encerrar): ");
    scanf("%d", &v[i].conta);

    while(v[i].conta != 0 && i < MAX){

        printf("Digite o saldo: ");
        scanf("%f", &v[i].saldo);

        soma += v[i].saldo;
        i++;

        printf("Digite o numero da conta (0 para encerrar): ");
        scanf("%d", &v[i].conta);
    }

    *media = soma / i;

    return i;
}

int main(){

    Cliente clientes[MAX];
    int n;
    float media;

    n = leitura(clientes, &media);

    printf("\nSaldo medio do banco: %.2f\n\n", media);

    for(int i = 0; i < n; i++){

        printf("Conta: %d\n", clientes[i].conta);
        printf("Saldo: %.2f\n", clientes[i].saldo);

        if(clientes[i].saldo < media)
            printf("Saldo abaixo da media\n\n");
        else
            printf("Saldo igual ou acima da media\n\n");
    }

    return 0;
}
