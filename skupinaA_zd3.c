#include <stdio.h>

int main() {
  
    char znak1, znak2;
    printf("Unesite prvi znak: ");
    scanf_s(" %c", &znak1);

    printf("Unesite drugi znak: ");
    scanf_s(" %c", &znak2);

    if (znak1 > znak2) {
        char temp = znak1;
        znak1 = znak2;
        znak2 = temp;
    }

    printf("Znakovi izmedu %c i %c su:\n", znak1, znak2);
    for (char z = znak1 + 1; z < znak2; z++) {
        printf("%c ", z);
    }
    printf("\n");

    return 0;
}
