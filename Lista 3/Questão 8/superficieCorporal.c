#include <stdio.h>
#include <math.h>

float calculaArea(float altura, float peso) {
    float area;
    area = sqrt((peso * altura) / 60.0);
    return area;
}

int main() {
    float altura, area_inicio, area_final, peso_inicio, peso_final;
    
    printf("Digite a altura (cm): ");
    scanf("%f", &altura);
    printf("Digite o peso no inicio do ano (kg): ");
    scanf("%f", &peso_inicio);
    printf("Digite o peso no final do ano (kg): ");
    scanf("%f", &peso_final);

    area_inicio = calculaArea(altura, peso_inicio);
    area_final = calculaArea(altura, peso_final);

    printf("\nArea corporal inicial: %.2f m2\n", area_inicio);
    printf("Area corporal final: %.2f m2\n", area_final);

    if (area_final > area_inicio)
        printf("Aumentou a area corporal.\n");
    else if (area_final < area_inicio) 
        printf("Diminuiu a area corporal.\n");
    else
        printf("Manteve area inalterada.\n");

    return 0;
}
