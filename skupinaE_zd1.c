#include <stdio.h>
#define PI 3.14159265

float Stozac(float r, float h) {
    return (1.0 / 3.0) * r * r * PI * h;
}

int main() {
    float r = 3.0, h = 5.0;
    float volumen = Stozac(r, h);
    printf("Volumen stozca: %.2f\n", volumen);
    return 0;
}
