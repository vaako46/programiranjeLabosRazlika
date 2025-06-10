#include <stdio.h>

float Srednja(int x, int y) {
    int suma = 0, brojac = 0;

    if (x > y) {
        int temp = x;
        x = y;
        y = temp;
    }

    for (int i = x + 1; i < y; i++) {
        if (i % 2 == 0) {
            suma += i;
            brojac++;
        }
    }

    if (brojac == 0)
        return 0;
    else
        return (float)suma / brojac;
}

int main() {
    int x = 3, y = 10;
    float rezultat = Srednja(x, y);
    printf("Srednja vrijednost parnih brojeva izmedju %d i %d: %.2f\n", x, y, rezultat);
    return 0;
}
