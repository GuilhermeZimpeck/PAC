void contaNumeros(int v[], int qtd, int *pos, int *neg, int *zero) {
    int i;
    *pos = 0;
    *neg = 0;
    *zero = 0;
    for (i = 0; i < qtd; i++) {
        if (v[i] > 0)
            (*pos)++;
        else if (v[i] < 0)
            (*neg)++;
        else
            (*zero)++;
    }
}
