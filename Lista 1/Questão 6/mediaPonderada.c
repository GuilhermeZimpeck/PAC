#include <stdio.h>
float calculaMediaPonderada(float nota1, float peso1, float nota2, float peso2) {
    float media;
    media = (nota1 * peso1 + nota2 * peso2) / (peso1 + peso2);
    return media;
}
int main() {
    float nota1, nota2, peso1, peso2, md;

    printf("Digite a primeira nota e seu peso: ");
    scanf("%f %f", &nota1, &peso1);
    printf("Digite a segunda nota e seu peso: ");
    scanf("%f %f", &nota2, &peso2);
    md = calculaMediaPonderada(nota1, peso1, nota2, peso2);

    printf("Media ponderada: %.2f\n", md);
    return 0;
}
