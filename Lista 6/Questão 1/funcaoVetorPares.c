int pares(int v[], int qtd) {
    int cont = 0;
    int produto = 1;
    while (cont < qtd) {
        if (v[cont] % 2 == 0)
            produto = produto * v[cont];
        cont++;
    }
    return produto;
}
