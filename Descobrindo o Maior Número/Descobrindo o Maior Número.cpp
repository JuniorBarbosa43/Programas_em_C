#include <stdio.h>

int main() {
    int a, b, c;

    printf("\nDigite um Numero: ");
    scanf("%d", &a);
    printf("\nDigite outro Numero: ");
    scanf("%d", &b);
    printf("\nDigite mais um Numero: ");
    scanf("%d", &c);

    if (a == b && a == c) {
        printf("\nOs três valores são iguais.");
    } else if (a > b && a > c) {
        printf("\nMaior Valor = %d", a);
    } else if (b > c) {
        printf("\nMaior Valor = %d", b);
    } else {
        printf("\nMaior Valor = %d", c);
    }

    return 0;
}
