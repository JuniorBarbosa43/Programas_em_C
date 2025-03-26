#include <stdio.h>

int main() {
    float imc, peso, alt;

    printf("\nDigite sua altura (em metros): ");
    scanf("%f", &alt);
    printf("Digite seu peso (em kg): ");
    scanf("%f", &peso);

    imc = peso / (alt * alt);

    printf("\nSeu IMC é: %.2f", imc);

    if (imc < 18.5)
        printf("\nClassificação: Peso Baixo\n");
    else if (imc <= 24.9)
        printf("\nClassificação: Peso Normal\n");
    else if (imc <= 29.9)
        printf("\nClassificação: Sobrepeso\n");
    else if (imc <= 34.9)
        printf("\nClassificação: Obesidade (Grau I)\n");
    else if (imc <= 39.9)
        printf("\nClassificação: Obesidade (Grau II)\n");
    else
        printf("\nClassificação: Obesidade (Grau III)\n");

    return 0;
}
