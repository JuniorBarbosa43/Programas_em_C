#include <stdio.h>

int main() {
    int ano;

    printf("Digite um ano: ");
    scanf("%d", &ano);

    if ((ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0)) {
        printf("\n%d é um ano bissexto.\n", ano);
    } else {
        printf("\n%d NÃO é um ano bissexto.\n", ano);
    }

    return 0;
}
