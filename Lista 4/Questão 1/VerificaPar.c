#include <stdio.h>

void verificaPar(int num){
    if (num%2==0)
        printf("o numero é par\n");
    else
        printf("o numero é impar\n");
}

int main(){
    int qtd, num;
    int cont = 0;
  
    printf("digite a quantidade de numeros que você quer verificar: ");
    scanf("%d",&qtd);
    
    while(cont<qtd)
    {
        printf("digite um numero: ");
        scanf("%d",&num);
        verificaPar(num);
        cont++;
    }
    return 0;
}
