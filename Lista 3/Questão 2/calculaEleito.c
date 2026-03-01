#include <stdio.h>

void calculaEleitor(int num) {
    if (num < 16) {
        printf("Você não pode votar\n");
    } 
    else
        if ((num < 18)||(num >= 70)) {
        printf("O seu voto é facultativo\n");
    } 
        else {
        printf("Seu voto é obrigatório\n");
    }
}

int main() {
    int idade;
    
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    calculaEleitor(idade);
    return 0;
}
