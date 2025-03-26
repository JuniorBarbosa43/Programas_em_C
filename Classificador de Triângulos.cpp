#include <stdio.h>

int main() {
    float a, b, c;

    printf("Digite o valor 'A' do triângulo: ");
    scanf("%f", &a);
    printf("Digite o valor 'B' do triângulo: ");
    scanf("%f", &b);
    printf("Digite o valor 'C' do triângulo: ");
    scanf("%f", &c);

    if ((a < b + c) && (b < a + c) && (c < a + b)) {
        printf("\nÉ um triângulo!");

        if (a == b && b == c) {
            printf("\nTipo: Triângulo Equilátero (todos os lados iguais).\n");
        } else if (a == b || b == c || a == c) {
            printf("\nTipo: Triângulo Isósceles (dois lados iguais).\n");
        } else {
            printf("\nTipo: Triângulo Escaleno (todos os lados diferentes).\n");
        }
    } else {
        printf("\nOs valores NÃO formam um triângulo.\n");
    }

    return 0;
}
