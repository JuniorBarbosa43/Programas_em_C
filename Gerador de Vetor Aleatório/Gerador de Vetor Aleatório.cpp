#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int a[20], i;

    printf("\nGerando os números do vetor A:\n");
    srand(time(NULL));

    for (i = 0; i < 20; i++) {
        a[i] = rand() % 50 + 1;
        printf("%3d ", a[i]);
    }

    printf("\n");
    return 0;
}
