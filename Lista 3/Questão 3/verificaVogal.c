#include <stdio.h>

void verificaVogal(char letra){
    
    if (letra=='A'||letra=='E'||letra=='I'||letra=='O'||letra=='U')
        printf("vogal maiúscula");
    else
        printf("não é vogal maiúcula");

}
int main(){
    char letra1;
    
    printf("digite uma Letra: ");
    scanf("%c",&letra1);
    verificaVogal(letra1);
    
    return 0;
}
