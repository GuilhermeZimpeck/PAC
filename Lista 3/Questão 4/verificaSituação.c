#include <stdio.h>
void verificaSituacao(float media) {
    if (media > 9.5) 
        printf("Parabens!\n");
    if (media >= 7.0) 
        printf("Aprovado\n");
    else if (media >= 3.0) 
        printf("Final\n");
    else 
        printf("Reprovado\n");
}

int main() {
    float media, nota1, nota2;
    int matricula;
    
    printf("Digite a matricula do aluno: ");
    scanf("%d", &matricula);
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2.0;

    printf("Media: %.2f\n", media);
    verificaSituacao(media);
    return 0;
}
