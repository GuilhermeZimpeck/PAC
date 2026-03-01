#include <stdio.h>
#include <math.h>

float calculaDistancia(float x1, float y1, float x2, float y2) {
    float distancia;
    distancia = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
    return distancia;
}
int main() {
    float x1, y1, x2, y2, x3, y3;
    float lado1, lado2, lado3, perimetro;

    printf("Digite as coordenadas do ponto A (x1 y1): ");
    scanf("%f %f", &x1, &y1);
    printf("Digite as coordenadas do ponto B (x2 y2): ");
    scanf("%f %f", &x2, &y2);
    printf("Digite as coordenadas do ponto C (x3 y3): ");
    scanf("%f %f", &x3, &y3);

    lado1 = calculaDistancia(x1, y1, x2, y2);
    lado2 = calculaDistancia(x2, y2, x3, y3);
    lado3 = calculaDistancia(x3, y3, x1, y1);

    perimetro = lado1 + lado2 + lado3;
    printf("Perimetro do triangulo: %.2f\n", perimetro);
    return 0;
}
