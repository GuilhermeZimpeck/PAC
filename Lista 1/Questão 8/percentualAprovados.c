#include <stdio.h>

float calculaPercentualAprovados(int totalAlunos, int reprovados) {
    int aprovados;
    float percent;
    aprovados = totalAlunos - reprovados;
    percent = (aprovados * 100.0) / totalAlunos;
    return percent;
}
int main() {
    int total, reprovados;
    float percentual;
   
    printf("Digite o total de alunos: ");
    scanf("%d", &total);
    printf("Digite o numero de reprovados: ");
    scanf("%d", &reprovados);

    percentual = calculaPercentualAprovados(total, reprovados);
    printf("Percentual de aprovados: %.2f%%\n", percentual);
    return 0;
}
