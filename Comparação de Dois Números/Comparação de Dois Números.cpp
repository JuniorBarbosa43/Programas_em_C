#include <stdio.h>

int main() {
    int a, b;

    printf("\nDigite um número: ");
    scanf("%d", &a);
    printf("\nDigite outro número: ");
    scanf("%d", &b);

    if (a == b) {
        printf("\nValores iguais\n");
    } else if (a > b) {
        printf("\nMaior valor = %d\n", a);
    } else {
        printf("\nMaior valor = %d\n", b);
    }

    return 0;
}
