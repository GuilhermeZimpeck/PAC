#include <stdio.h>

int lerAlunos(int qtd) {
    int i, matr;
    float n1, n2, media;
    int aprovados = 0;

    for (i = 1; i <= qtd; i++) {
        printf("\nmatricula do aluno %d: ", i);
        scanf("%d", &matr);
        printf("Nota 1: ");
        scanf("%f", &n1);
        printf("Nota 2: ");
        scanf("%f", &n2);

        media = (n1 + n2) / 2.0;

        printf("Matricula: %d\n", matr);
        printf("Media: %.2f\n", media);

        if (media >= 7.0) {
            printf("Situacao: Aprovado\n");
            aprovados++;
        } else if (media >= 5.0) {
            printf("Situacao: Final\n");
        } else {
            printf("Situacao: Reprovado\n");
        }

        if (media > 9.5) {
            printf("Parabens!\n");
        }
    }

    return aprovados;
}

int main() {
    int qtd, totalAprovados;

    printf("Digite a quantidade de alunos da turma: ");
    scanf("%d", &qtd);

    totalAprovados = lerAlunos(qtd);
    printf("\nQuantidade de alunos aprovados: %d\n", totalAprovados);
    return 0;
}
