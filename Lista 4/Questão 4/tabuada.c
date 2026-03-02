#include <stdio.h>

void tabuada(int n) {
    int i, resultado;
    printf("Tabuada do %d\n",n);
    
    for (i = 0; i < 11; i++) {
        resultado = n*i;
        printf("%d: %d\n",i,resultado);
    }
}
int main() {
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    tabuada(num);
    return 0;
}
