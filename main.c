#include <stdio.h>
/*
 * Containers em um navio
 */
int main(void) {
    int c;
    int b;
    int a;
    int z;
    int y;
    int x;
    int totalContainersLargura;
    int totalContainersComprimento;
    int totalContainersAltura;
    int totalContainersNavio;

    // printf("Informe as medidas do navio (X, Y, Z):\n");
    scanf("%d%d%d", &x, &y, &z);

    // Leitura das medidas do container
    // printf("Informe as medidas do container (A, B, C):\n");
    scanf("%d%d%d", &a, &b, &c);

    // Verificação se as medidas são positivas
    if (x <= 0 || y <= 0 || z <= 0 || a <= 0 || b <= 0 || c <= 0) {
        printf("ERRO");
        return 0;
    }

    totalContainersComprimento = x / a;
    totalContainersLargura = y / b;
    totalContainersAltura = z / c;

    totalContainersNavio = totalContainersComprimento * totalContainersLargura * totalContainersAltura;


    if (totalContainersNavio < 0 ) {
        printf("ERRO");

    } else {
        printf("%d", totalContainersNavio);
    }

}
