#include <stdio.h>
#define MAX 1000

typedef struct{
    int codigo;
    float preco;
    int quantidade;
}Produto;

void leitura(Produto v[], int n){
    for(int i = 0; i < n; i++){
        printf("Produto %d\n", i+1);
        printf("Codigo: ");
        scanf("%d", &v[i].codigo);
        printf("Preco unitario: ");
        scanf("%f", &v[i].preco);
        printf("Quantidade em estoque: ");
        scanf("%d", &v[i].quantidade);
    }
}

int busca(Produto v[], int n, int cod){
    for(int i = 0; i < n; i++){
        if(v[i].codigo == cod){
            return i;
        }
    }
    return -1;
}

int main(){

    Produto produtos[MAX];
    int codigo;
    int pos;

    leitura(produtos, MAX);

    printf("\nDigite o codigo do produto para consulta (0 para sair): ");
    scanf("%d", &codigo);

    while(codigo != 0){

        pos = busca(produtos, MAX, codigo);

        if(pos == -1){
            printf("Produto inexistente\n");
        }
        else{
            printf("Preco: %.2f\n", produtos[pos].preco);
            printf("Quantidade em estoque: %d\n", produtos[pos].quantidade);
        }

        printf("\nDigite o codigo do produto para consulta (0 para sair): ");
        scanf("%d", &codigo);
    }

    return 0;
}
