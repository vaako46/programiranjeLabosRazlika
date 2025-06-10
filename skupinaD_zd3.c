#include <stdio.h>
#include <string.h>

int main() {
    char tekst[51];
    int samoglasnici = 0;

    printf("Unesite string (max 50 znakova): ");
    scanf_s("%50s", tekst, 51);

    for (int i = 0; tekst[i] != '\0'; i++) {
        char c = tekst[i];
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            samoglasnici++;
        }
    }

    printf("Broj samoglasnika u stringu: %d\n", samoglasnici);
    return 0;
}
