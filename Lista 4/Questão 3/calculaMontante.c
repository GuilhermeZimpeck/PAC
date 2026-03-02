#include <stdio.h>

float calculaMontante(float aumento){
    int matricula;
    float salario, novosalario, montante;
    
    printf("digite a matricula do funcionario, ou 0 para parar: ");
    scanf("%d",&matricula);
    
    while(matricula>0)
    {
        printf("digite o salario do funcionario: ");
        scanf("%f",&salario);
        novosalario = salario * aumento;
        
        printf("\no novo salario do funcionario %d é: %.2f",matricula,novosalario);
        montante += novosalario - salario;
        
        printf("\n\ndigite a matricula do funcionario, ou 0 para parar: ");
        scanf("%d",&matricula);
    }
return montante;
}

int main (){
    float num, resultado, percentual;
    
    printf("digite o percentual de aumento: ");
    scanf("%f",&num);
    
    percentual = 1 +(num/100);
    resultado = calculaMontante(percentual);
    printf("\no montante a ser gasto pela empresa é: %.2f", resultado);

    return 0;
}
