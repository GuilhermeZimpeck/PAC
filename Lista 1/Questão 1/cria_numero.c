#include <stdio.h>

int main() {
    int X, Y, criaNumero;

    printf("digite o valor de X: \n");
    scanf("%d", &X);
    printf("digite o valor de Y: \n");
    scanf("%d", &Y);

    criaNumero = X * 100 + Y;
    printf("o numero criado foi: %d",criaNumero);
    return 0;
}
