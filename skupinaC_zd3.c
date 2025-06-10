#include <stdio.h>

int main() {
    int n;
    float mat[4][4];

    do {
        printf("Unesite n (2 < n < 5): ");
        scanf_s("%d", &n);
    } while (n <= 2 || n >= 5);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Matrica: [%d][%d]: ", i, j);
            scanf_s("%f", &mat[i][j]);
        }
    }

    printf("\nUnesena matrica:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%.2f\t", mat[i][j]);
        }
        printf("\n");
    }

    float umnozak = 1;
    int ima_pozitivnih = 0;

    for (int i = 0; i < n; i++) {
        if (mat[i][i] > 0) {
            umnozak *= mat[i][i];
            ima_pozitivnih = 1;
        }
    }

    if (ima_pozitivnih)
        printf("Umnozak pozitivnih na glavnoj dijagonali: %.2f\n", umnozak);
    else
        printf("Nema pozitivnih brojeva na glavnoj dijagonali.\n");

    return 0;
}
