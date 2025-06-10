#include <stdio.h>

int main() {
    int n;
    int mat[3][3];

    do {
        printf("Unesite n (n < 4): ");
        scanf_s("%d", &n);
    } while (n >= 4);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Matrica: [%d][%d]: ", i, j);
            scanf_s("%d", &mat[i][j]);
        }
    }

    int suma = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int broj = mat[i][j];
            if ((broj >= 10 && broj <= 99) || (broj <= -10 && broj >= -99)) {
                suma += broj;
            }
        }
    }

    printf("Zbroj dvoznamenkastih brojeva: %d\n", suma);
    return 0;
}
