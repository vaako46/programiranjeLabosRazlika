#include <stdio.h>
#include <string.h>

int main() {
    char tekst[100];
    int brojA = 0;

    printf("Unesite string (max 100 znakova): ");
    scanf_s("%99s", tekst, 100);

    int duljina = strlen(tekst);

    for (int i = 0; i < duljina; i++) {
        if (tekst[i] == 'a' || tekst[i] == 'A') {
            brojA++;
        }
    }
    double postotak = (brojA * 100.0) / duljina;

    printf("Slovo 'a' ili 'A' se pojavljuje %d puta (%.2f%% od ukupno %d znakova).\n", brojA, postotak, duljina);
    return 0;
}
