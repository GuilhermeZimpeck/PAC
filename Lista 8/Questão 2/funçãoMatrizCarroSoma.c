void totalPorMes(int vendas[6][12]) {
    int i, j, somaMes;
    
    for (j = 0; j < 12; j++) {
        somaMes = 0;

        for (i = 0; i < 6; i++) {
            somaMes += vendas[i][j];
        }

        printf("Mes %d = %d\n", j + 1, somaMes);
    }
}
