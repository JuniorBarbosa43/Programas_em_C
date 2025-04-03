#include <stdio.h>

int main() {
    int a, b, c, aux;

    printf("\nDigite o número A: ");
    scanf("%d", &a);
    printf("Digite o número B: ");
    scanf("%d", &b);
    printf("Digite o número C: ");
    scanf("%d", &c);

    if (a > b) {
        aux = a;
        a = b;
        b = aux;
    }
    
    if (a > c) {
        aux = a;
        a = c;
        c = aux;
    }
    
    if (b > c) {
        aux = b;
        b = c;
        c = aux;
    }

    printf("\nNúmeros em ordem crescente: %d, %d, %d\n", a, b, c);

    return 0;
}
