#include <stdio.h>

void converteDias(int totalDias) {
    int semanas = totalDias / 7;
    int dias = totalDias % 7;

    printf("%d semanas e %d dias\n", semanas, dias);
}
int main() {
    int dias;
    printf("Digite o numero total de dias: ");
    scanf("%d", &dias);
    converteDias(dias);

    return 0;
}
