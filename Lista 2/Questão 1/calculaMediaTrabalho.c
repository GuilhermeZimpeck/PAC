#include <stdio.h>

float calculaMedia (float num1, float num2){
    float media =(num1 + num2) / 2;
    return(media);
}
int main(){
    int matricula;
    float no1, no2, tr1, tr2;
    
    printf("Digite a matricula do aluno: ");
    scanf("%d",&matricula);
    printf("\nDigite as duas notas das provas: ");
    scanf("%f%f",&no1, &no2);
    printf("\nDigite as duas notas dos trabalhos: ");
    scanf("%f%f",&tr1, &tr2);
    
    float mediaN = calculaMedia(no1,no2);
    float mediaT = calculaMedia(tr1,tr2);
    float mediaF = calculaMedia(mediaN ,mediaT);
    
    printf("as media do aluno %d foram: \n",matricula);
    printf("media das provas: %.2f",mediaN);
    printf("\nmedia dos trabalhos: %.2f",mediaT);
    printf("\nmedia final foi: %.2f",mediaF);
    return 0;
}
