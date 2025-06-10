#include <stdio.h>
#include <string.h>

int main() {
    char tekst[100];
    int malaA = 0, velikaA = 0;

    printf("Unesite string (max 100 znakova): ");
    scanf_s("%99s", tekst, 100);

    for (int i = 0; tekst[i] != '\0'; i++) {
        if (tekst[i] == 'a') malaA++;
        if (tekst[i] == 'A') velikaA++;
    }

    if (malaA > velikaA)
        printf("Slovo 'a' se pojavljuje vise puta (%d puta).\n", malaA);
    else if (velikaA > malaA)
        printf("Slovo 'A' se pojavljuje vise puta (%d puta).\n", velikaA);
    else
        printf("Slova 'a' i 'A' se pojavljuju jednako (%d puta).\n", malaA);

    return 0;
}
