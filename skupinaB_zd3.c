#include <stdio.h>

int main() {
    int n;
    float polje[77];

    do {
        printf("Unesite broj elemenata (8 - 76): ");
        scanf_s("%d", &n);
    } while (n <= 7 || n >= 77);

    for (int i = 0; i < n; i++) {
        printf("Unesite %d. broj: ", i + 1);
        scanf_s("%f", &polje[i]);
    }

    float suma1 = 0;
    float suma2 = 0;
    int brojac2 = 0;

    for (int i = 0; i < n; i++) {
        if (polje[i] >= -10 && polje[i] <= 10)
            suma1 += polje[i];

        if (polje[i] >= 30 && polje[i] <= 40) {
            suma2 += polje[i];
            brojac2++;
        }
    }

    printf("Zbroj elemenata u intervalu [-10, 10]: %.2f\n", suma1);

    if (brojac2 > 0) {
        printf("Srednja vrijednost elemenata u intervalu [30, 40]: %.2f\n", suma2 / brojac2);
    }
    else {
        printf("Nema elemenata u intervalu [30, 40].\n");
    }

    return 0;
}
