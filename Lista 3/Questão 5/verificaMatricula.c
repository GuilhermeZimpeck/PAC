#include <stdio.h>
int verificaMatricula(int matricula) {
    int AA = matricula / 1000;       
    int S  = (matricula / 100) % 10; 
    int NN = matricula % 100;         

    if ((AA >= 10 && AA <= 22) && (S == 1 || S == 2) && (NN >= 1 && NN <= 90))
        return 1; 
    return 0;
}
int main() {
    int matricula, verif;
    printf("A matricula precisa necessariamente ser:\n\nAno:_ _ Semestre:_ Numero de 01 a 90:_ _\n\n");
    printf("Digite a matricula (AASNN): ");
    scanf("%d", &matricula);
    verif = (verificaMatricula(matricula));
    if(verif == 1) {
        printf("Matricula valida.\n");
    } else {
        printf("Matricula invalida.\n");
    }
    return 0;
}
