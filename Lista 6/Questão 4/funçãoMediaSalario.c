struct depto {
    int qtd;
    float soma;
};

typedef struct depto Tdepto;

void calculaMedia(Tdepto vet[], int n) {
    int i;
    float media;

    for (i = 0; i < n; i++) {
        if (vet[i].qtd > 0) {
            media = vet[i].soma / vet[i].qtd;
        } else {
            media = 0;
        }

        printf("Departamento %d - Salario medio: %.2f\n", i + 1, media);
    }
}
