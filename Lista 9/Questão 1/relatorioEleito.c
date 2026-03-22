#include <stdio.h>
#include <string.h>

#define CANDIDATOS 15
#define ELEITORES 1000

void le_dados_candidatos(char candidatos[CANDIDATOS][21]) {
    int i;
    for(i = 0; i < CANDIDATOS; i++) {
        printf("Digite o nome do candidato %d: ", i + 1);
        fgets(candidatos[i], 21, stdin);
        candidatos[i][strcspn(candidatos[i], "\n")] = '\0';
    }
}

int descobre_eleito(int votos[CANDIDATOS][2]) {
    int i, max = 0;

    for(i = 1; i < CANDIDATOS; i++) {
        if(votos[i][0] + votos[i][1] > votos[max][0] + votos[max][1]) {
            max = i;
        }
    }
    return max;
}

void gera_relatorio(char candidatos[CANDIDATOS][21], int votos[CANDIDATOS][2]) {
    int i;
    int total_geral = 0;

    printf("\n\n");
    printf("------------------------------------------------------\n");
    printf("%-20s %-10s %-10s %-10s\n", "Candidato", "Brasil", "Exterior", "Total");
    printf("------------------------------------------------------\n");

    for(i = 0; i < CANDIDATOS; i++) {
        int total = votos[i][0] + votos[i][1];
        total_geral += total;

        printf("%-20s %-10d %-10d %-10d\n",
               candidatos[i],
               votos[i][0],
               votos[i][1],
               total);
    }

    printf("------------------------------------------------------\n");
    printf("Total geral de votos: %d\n", total_geral);

    int eleito = descobre_eleito(votos);
    printf("\nPresidente eleito: %s\n", candidatos[eleito]);
}

int busca_candidato(char nome[], char candidatos[CANDIDATOS][21]) {
    int i;
    for(i = 0; i < CANDIDATOS; i++) {
        if(strcmp(nome, candidatos[i]) == 0) {
            return i;
        }
    }
    return -1;
}

int main() {
    char candidatos[CANDIDATOS][21];
    int votos[CANDIDATOS][2] = {0}; 
    char nome[21];
    int local, i;

    le_dados_candidatos(candidatos);

    for(i = 0; i < ELEITORES; i++) {
        printf("\nEleitor %d\n", i + 1);

        printf("Digite o nome do candidato: ");
        fgets(nome, 21, stdin);
        nome[strcspn(nome, "\n")] = '\0';

        printf("Digite 0 (Brasil) ou 1 (Exterior): ");
        scanf("%d", &local);
        getchar();

        int indice = busca_candidato(nome, candidatos);

        if(indice != -1) {
            if(local == 0 || local == 1) {
                votos[indice][local]++;
            }
        }

    }

    gera_relatorio(candidatos, votos);
    system("pause");
    return 0;
}
