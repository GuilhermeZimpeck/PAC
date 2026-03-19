void totalPorAno(int vendas[6][12], float preco[6]) {
    int totalCarros;
    float totalVendas;
    
    for (int i = 0; i < 6; i++) {
        totalCarros = 0;

        for (int j = 0; j < 12; j++) {
            totalCarros += vendas[i][j];
        }

        totalVendas = totalCarros * preco[i];
        printf("Ano %d: Total de vendas = %.2f\n", 2010 + i, totalVendas);
    }
}
