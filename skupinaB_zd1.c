#include <stdio.h>

int main() {
    int n;
    int polje[20];

    do {
        printf("Unesite broj elemenata (2 - 20): ");
        scanf_s("%d", &n);
    } while (n <= 1 || n > 20);

    for (int i = 0; i < n; i++) {
        printf("Unesite %d. broj: ", i + 1);
        scanf_s("%d", &polje[i]);
    }

    double suma = 0;
    for (int i = 0; i < n; i++) {
        suma += polje[i];
    }
    double srednja = suma / n;

    int neparni_manji = 0, neparni_veci = 0;

    printf("Elementi veci od srednje vrijednosti i parni:\n");
    for (int i = 0; i < n; i++) {
        if (polje[i] > srednja && polje[i] % 2 == 0) {
            printf("%d ", polje[i]);
        }
        if (polje[i] % 2 != 0) {
            if (polje[i] < srednja)
                neparni_manji++;
            else if (polje[i] > srednja)
                neparni_veci++;
        }
    }

    printf("\nBroj neparnih manjih od srednje: %d\n", neparni_manji);
    printf("Broj neparnih vecih od srednje: %d\n", neparni_veci);

    return 0;
}
