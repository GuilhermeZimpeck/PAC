#include <stdio.h>

int main() {
    int num, soma, mult, resultado1, resultado2 ;

    printf("digite um numero: \n");
    scanf("%d", &num);
    printf("digite um valor para ser somado: \n");
    scanf("%d", &soma);
    printf("digite um valor para ser multiplicado: \n");
    scanf("%d", &mult);

    resultado1 = num + soma;
    resultado2 = num * mult;
    printf("a soma foi: ");
    printf("%d \n", resultado1);
    printf("a multiplicação foi: ");
    printf("%d", resultado2);
    return 0;
}
