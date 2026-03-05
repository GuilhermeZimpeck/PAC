#include <stdio.h>
#define MAX 10000

struct Livro{
    int codigo;
    int exemplares;
    int emprestados;
};
typedef struct Livro Livro;

void leitura(Livro v[], int n){
    for(int i = 0; i < n; i++){

        printf("\nLivro %d\n", i+1);

        printf("Codigo: ");
        scanf("%d", &v[i].codigo);

        printf("Quantidade de exemplares: ");
        scanf("%d", &v[i].exemplares);

        printf("Quantidade emprestados: ");
        scanf("%d", &v[i].emprestados);
    }
}

void ordena(Livro v[], int n){
    Livro temp;

    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j < n; j++){
            if(v[i].codigo > v[j].codigo){
                temp = v[i];
                v[i] = v[j];
                v[j] = temp;
            }
        }
    }
}

int busca(Livro v[], int n, int cod){

    int inicio = 0;
    int fim = n - 1;
    int meio;

    while(inicio <= fim){

        meio = (inicio + fim) / 2;

        if(v[meio].codigo == cod)
            return meio;

        if(cod < v[meio].codigo)
            fim = meio - 1;
        else
            inicio = meio + 1;
    }

    return -1;
}

int main(){

    Livro livros[MAX];
    int n, codigo, pos, disponivel;

    printf("Quantidade de livros cadastrados: ");
    scanf("%d", &n);

    leitura(livros, n);

    ordena(livros, n);

    printf("\nDigite o codigo do livro para consulta (0 para sair): ");
    scanf("%d", &codigo);

    while(codigo != 0){

        pos = busca(livros, n, codigo);

        if(pos == -1){
            printf("Livro inexistente\n");
        }
        else{

            disponivel = livros[pos].exemplares - livros[pos].emprestados;

            if(disponivel == 0)
                printf("Livro nao disponivel para emprestimo\n");
            else
                printf("Livro disponivel para emprestimo\n");
        }

        printf("\nDigite o codigo do livro para consulta (0 para sair): ");
        scanf("%d", &codigo);
    }
    return 0;
}
