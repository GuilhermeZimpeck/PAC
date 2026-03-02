int contaMaioresQueMedia(float v[], int n, float media) {
    int i, contador = 0;

    for (i = 0; i < n; i++) {
        if (v[i] > media)
            contador++; 
    }
    return contador;
}
