#include <stdio.h>
#define MAX 100
#define DEP 10

struct Funcionario{
    int matricula;
    int departamento;
    int idade;
    char sexo;
};
typedef struct Funcionario Funcionario;

void inicializa(int soma[], int cont[]){
    for(int i = 0; i < DEP; i++){
        soma[i] = 0;
        cont[i] = 0;
    }
}

void exibe(int soma[], int cont[]){
    for(int i = 0; i < DEP; i++){
        if(cont[i] > 0){
            float media = (float)soma[i] / cont[i];
            printf("Departamento %d / Idade media: %.2f\n", i, media);
        }
    }
}

int main(){

    Funcionario f[MAX];
    int n;
    int soma[DEP], cont[DEP];

    inicializa(soma, cont);

    printf("Digite a quantidade de funcionarios: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++){

        printf("\nFuncionario %d\n", i+1);

        printf("Matricula: ");
        scanf("%d", &f[i].matricula);

        printf("Departamento (0 a 20): ");
        scanf("%d", &f[i].departamento);

        printf("Idade: ");
        scanf("%d", &f[i].idade);

        printf("Sexo (F/M): ");
        scanf(" %c", &f[i].sexo);

        soma[f[i].departamento] += f[i].idade;
        cont[f[i].departamento]++;
    }

    printf("\nIdade media por departamento:\n");
    exibe(soma, cont);

    return 0;
}
