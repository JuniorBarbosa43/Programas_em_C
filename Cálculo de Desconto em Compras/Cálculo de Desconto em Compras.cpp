#include <stdio.h>

int main() {
    float desc, val, vp;

    printf("\nDigite o Valor da compra: ");
    scanf("%f", &val); 

    if (val >= 500)
        desc = val * 0.20;
    else if (val >= 200)
        desc = val * 0.15;
    else
        desc = val * 0.10;

    vp = val - desc;

    printf("\nValor da compra: R$ %.2f", val);
    printf("\nDesconto aplicado: R$ %.2f", desc);
    printf("\nValor final a pagar: R$ %.2f\n", vp);

    return 0;
}
