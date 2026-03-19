void analiseCombustivel(float vendas[4][31], float precos[4][31])
{
    int i, j;
    float total, totalDia;
    
    for (i = 0; i < 4; i++) {
        total = 0;

        for (j = 0; j < 31; j++) {
            total += vendas[i][j] * precos[i][j];
        }

        printf("Combustivel %d: %.2f\n", i + 1, total);
    }

    printf("\n");

    for (j = 0; j < 31; j++) {
        totalDia = 0;

        for (i = 0; i < 4; i++) {
            totalDia += vendas[i][j] * precos[i][j];
        }

        printf("Dia %d: %.2f\n", j + 1, totalDia);
    }
}
