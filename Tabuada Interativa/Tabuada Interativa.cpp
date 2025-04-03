#include <stdio.h>

int main() {
    int n, cont = 1, r;

    printf("\nDigite a tabuada desejada: ");
    scanf("%d", &n);

    while (cont <= 10) {
        r = n * cont;
        printf("\n%d * %d = %d", n, cont, r);
        cont++;
    }

    printf("\n"); 
    return 0;
}
