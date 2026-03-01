#include <stdio.h>
int converteParaMinutos(int hora, int minutos) {
    int totalMinutos = hora * 60 + minutos;
    return totalMinutos;
}

int main() {
    int hora, minutos;
    int resultado;

    printf("Digite a hora: ");
    scanf("%d", &hora);

    printf("Digite os minutos: ");
    scanf("%d", &minutos);

    resultado = converteParaMinutos(hora, minutos);
    printf("Total em minutos: %d\n", resultado);
    return 0;
}
