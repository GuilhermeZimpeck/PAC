#include <stdio.h>
int calculaSoma(int a, int b, int c) {
    int soma = a + b + c;
    printf("Soma: %d\n", soma);
    return soma;
}

void calculaMedia(int a, int b, int c) {
    int soma = calculaSoma(a, b, c);  
    float media = soma / 3.0;        
    printf("Media: %.2f\n", media);
}

int main() {
    int n1, n2, n3;
    printf("Digite tres numeros inteiros: ");
    scanf("%d %d %d", &n1, &n2, &n3);
    calculaMedia(n1, n2, n3);
    return 0;
}
