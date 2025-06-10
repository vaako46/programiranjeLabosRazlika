#include <stdio.h>

int main() {
    int n;
    float polje[50];

    do {
        printf("Unesite broj elemenata (5 - 49): ");
        scanf_s("%d", &n);
    } while (n < 5 || n >= 50);

    for (int i = 0; i < n; i++) {
        printf("Unesite %d. broj: ", i + 1);
        scanf_s("%f", &polje[i]);
    }

    printf("Elementi u obrnutom redoslijedu (parni udvostruceni):\n");
    for (int i = n - 1; i >= 0; i--) {
        if ((int)polje[i] % 2 == 0 && polje[i] == (int)polje[i]) {
            printf("%.2f ", polje[i] * 2);
        }
        else {
            printf("%.2f ", polje[i]);
        }
    }

    printf("\n");
    return 0;
}
