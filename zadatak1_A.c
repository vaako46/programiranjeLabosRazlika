#include <stdio.h>

int main() {
    int broj;
  
    do {
        printf("Unesite troznamenkasti broj: ");
        scanf_s("%d", &broj);
    } while (broj < 100 || broj > 999);

    int a = broj / 100;
    int b = (broj / 10) % 10;
    int c = broj % 10;

    int max = a;
    if (b > max) max = b;
    if (c > max) max = c;

    int umnozak;
    if (max == a) umnozak = b * c;
    else if (max == b) umnozak = a * c;
    else umnozak = a * b;

    printf("Najveca znamenka: %d\n", max);
    printf("Umnozak preostalih dviju znamenki: %d\n", umnozak);

    return 0;
}
