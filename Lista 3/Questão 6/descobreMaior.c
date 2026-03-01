#include <stdio.h>

void descobreMaior(int a, int b, int c, int d) {
    if (a == b && b == c && c == d) 
        printf("Todos os numeros sao iguais.\n");
    else{
        int maior = a;

        if (b > maior) maior = b;
        if (c > maior) maior = c;
        if (d > maior) maior = d;

        printf("O maior numero eh: %d\n", maior);
    }
        
}

int main() {
    int n1, n2, n3, n4;

    printf("Digite quatro numeros inteiros:\n");
    scanf("%d %d %d %d", &n1, &n2, &n3, &n4);

    descobreMaior(n1, n2, n3, n4);

    return 0;
}
