#include <stdio.h>

int main() {
    int n;

    do {
        printf("Unesite broj n (5 <= n <= 20): ");
        scanf_s("%d", &n);
    } while (n < 5 || n > 20);

    int broj, brojac = 0;

    for (int i = 0; i < n; i++) {
        printf("Unesite %d. broj: ", i + 1);
        scanf_s("%d", &broj);

        if (broj % 7 == 0 && broj > 15) {
            brojac++;
        }
    }
    printf("Brojeva djeljivih sa 7 i vecih od 15 ima: %d\n", brojac);
    return 0;
}
