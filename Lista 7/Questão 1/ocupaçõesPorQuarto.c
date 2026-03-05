#include <stdio.h>

void inicializa(int v[], int n){
    for(int i = 0; i < n; i++)
        v[i] = 0;
}

void exibe(int v[], int n){
    for(int i = 0; i < n; i++)
        printf("Quarto %d foi ocupado %d vezes\n", i+1, v[i]);
}

int main(){

    int quartos[50];
    int num;

    inicializa(quartos, 50);

    printf("Digite o numero do quarto ocupado (1 a 50) ou 0 para encerrar:\n");
    scanf("%d", &num);

    while(num != 0){
        if(num >= 1 && num <= 50){
            quartos[num-1]++;
        }
        scanf("%d", &num);
    }

    printf("\nQuantidade de ocupacoes:\n");
    exibe(quartos, 50);

    return 0;
}
