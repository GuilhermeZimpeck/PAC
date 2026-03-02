#include <stdio.h>
char leValidaTipo()
{
    char tipoC;
    
    do
    {
        printf("Digite o tipo do cliente, V, E ou P: ");
        scanf(" %c", &tipoC);
        if(tipoC != 'V' && tipoC != 'E' && tipoC != 'P')
            printf("digite novamente, tipo de cliente invalido\n");
    } while(tipoC != 'V' && tipoC != 'E' && tipoC != 'P');

return tipoC;
}

void descobrePercentuais(char tipo, float *pn, float *pi)
{
    if(tipo == 'V'){
        *pn =*pn * 0.745;
        *pi =*pi * 0.8;
    }
    else if(tipo == 'E'){
        *pn =*pn * 0.841;
        *pi =*pi * 0.885;
    }
        else{
            *pn =*pn * 0.95;
            *pi =*pi * 0.975;
        }
}
int main()
{
    float pnacionais, pimportados;
    int codigo;
    int qtd = 0;
    
    while(qtd<1000)
    {
        printf("digite o codigo do cliente: ");
        scanf("%d", &codigo);
        char tipocliente = leValidaTipo();
        printf("digite os valores pagos em produtos nacionais e internacionais: ");
        scanf("%f%f", &pnacionais, &pimportados);
        descobrePercentuais(tipocliente,&pnacionais,&pimportados);
        float total = pnacionais + pimportados;
        printf("\nO cliente de codigo: %d \nPossui os seguintes valores\nProdutos nacionais: %.2f \nProdutos importados: %.2f\nTotal: %.2f\n\n",codigo,pnacionais,pimportados,total);
        qtd ++;
    }
    return 0;
}
