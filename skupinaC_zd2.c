#include <stdio.h>

int main() {
    int n;
    float mat[4][4];

    do {
        printf("Unesite n (n < 5): ");
        scanf_s("%d", &n);
    } while (n >= 5);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Matrica: [%d][%d]: ", i, j);
            scanf_s("%f", &mat[i][j]);
        }
    }

    float min = mat[0][0];
    float max = mat[0][0];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (mat[i][j] < min) min = mat[i][j];
            if (mat[i][j] > max) max = mat[i][j];
        }
    }

    printf("Razlika najveceg i najmanjeg elementa: %.2f\n", max - min);
    return 0;
}
