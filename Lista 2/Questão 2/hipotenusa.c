#include <stdio.h>
#include <math.h>

float hipotenusa(float A, float B){
    float C;
    C = sqrt(pow(A,2) + pow(B,2));
    return C;
}
int main(){
    float num1, num2;
    
    printf("Digite o valor dos dois catetos de um triangulo retangulo: ");
    scanf("%f%f",&num1,&num2);
    
  float resultado = hipotenusa(num1, num2);
    printf("\na hipotenusa do triangulo é igual a: %.2f",resultado);
    return 0;
}
