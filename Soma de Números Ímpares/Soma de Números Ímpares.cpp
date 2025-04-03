#include <stdio.h>

int main() {
    int A, B, i, soma = 0;

    printf("Digite o valor de A: ");
    scanf("%d", &A);
    printf("Digite o valor de B: ");
    scanf("%d", &B);

    if (A > B) {
        printf("Erro: A deve ser menor ou igual a B.\n");
        return 1; 
    }

    printf("Os números ímpares entre %d e %d são: ", A, B);
    for (i = A; i <= B; i++) {
        if (i % 2 != 0) {
            printf("%d ", i);
            soma += i;
        }
    }

    printf("\nA soma dos valores ímpares entre %d e %d é: %d\n", A, B, soma);
    return 0;
}
