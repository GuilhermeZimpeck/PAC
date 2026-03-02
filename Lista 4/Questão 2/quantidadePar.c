#include <stdio.h>

int quantidadePar(int qtd){
    int num;
    int cont1 = 0;
    int cont2 = 0;
    
    while(cont1<qtd)
    {
        printf("digite um numero: ");
        scanf("%d",&num);
        if (num % 2 == 0){
            cont2 += 1;
        }
        cont1++;
        }
return cont2;
}

int main(){
    int valor, resultado;
    
    printf("digite a quantidade de numeros que você quer verificar: ");
    scanf("%d", &valor);
    
    resultado = quantidadePar(valor);
    printf("a quantidade de numeros pares é: %d",resultado);
    return 0;
    
}
