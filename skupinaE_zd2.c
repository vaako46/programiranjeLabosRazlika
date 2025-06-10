#include <stdio.h>

int Znamenke(int n) {
    if (n < 10)
        return 1;
    else if (n < 100)
        return 2;
    else
        return 3;
}

int main() {
    int n = 23;
    int rez = Znamenke(n);
    printf("Broj kategorija znamenki: %d\n", rez);
    return 0;
}
