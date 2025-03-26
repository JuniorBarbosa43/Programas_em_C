#include <stdio.h>

int main() {
    int i, cen, dez, uni;

    printf("Números ascendentes de 3 algarismos entre 100 e 999:\n");

    for (i = 101; i <= 987; i++) {
        cen = i / 100;
        dez = (i / 10) % 10;
        uni = i % 10;

        if (cen < dez && dez < uni) {
            printf("%d\n", i);
        }
    }

    return 0;
}
