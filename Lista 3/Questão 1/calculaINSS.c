#include <stdio.h>

void calculaINSS(float salario) {
    float desconto = 0.11 * salario;
    if (desconto > 951.62)
        printf("O limite do desconto foi ultrapassado.\n");
    else
        printf("O desconto do INSS foi de: %.2f reais\n", desconto);
}

int main() {
    float num;
    
    printf("Digite o valor do salario: ");
    scanf("%f", &num);
    calculaINSS(num); 
    return 0;
}
