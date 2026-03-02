#include <stdio.h>

float calculaIDH(float E, float L, float R) {
    float idh;

    if (E >= (L + R)) {
        idh = E * L* R / ((E + L + R)/3);
    } else {
        idh = (E + L + R) / 3;
    }
    return idh;
}

int main() {
    float E, L, R, idh;
    
    printf("Digite a Educacao: ");
    scanf("%f", &E);
    printf("Digite a Longevidade: ");
    scanf("%f", &L);
    printf("Digite a Riqueza: ");
    scanf("%f", &R);

    idh = calculaIDH(E, L, R);
    printf("IDH calculado: %.2f", idh);
    return 0;
}
