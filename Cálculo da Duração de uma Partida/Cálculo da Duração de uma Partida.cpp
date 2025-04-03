#include <stdio.h>

int main() {
    int hi, hf, duracao;

    printf("Digite a hora de início da partida (0-23): ");
    scanf("%d", &hi);

    printf("Digite a hora de término da partida (0-23): ");
    scanf("%d", &hf);

    if (hi < 0 || hi > 23 || hf < 0 || hf > 23) {
        printf("Erro: As horas devem estar entre 0 e 23.\n");
        return 1;
    }

    if (hf >= hi) {
        duracao = hf - hi;
    } else {
        duracao = 24 - hi + hf;
    }

    printf("A partida durou %d horas.\n", duracao);

    return 0;
}
