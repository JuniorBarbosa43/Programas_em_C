#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 20

typedef struct {
    int senhas[TAMANHO];
    int frente;  
    int tras;  
    int tamanho; 
} Fila;

void inicializarFila(Fila *fila) {
    fila->frente = 0;
    fila->tras = -1;
    fila->tamanho = 0;
}

int filaCheia(Fila *fila) {
    return fila->tamanho == TAMANHO;
}

int filaVazia(Fila *fila) {
    return fila->tamanho == 0;
}

void inserirSenha(Fila *fila, int senha) {
    if (filaCheia(fila)) {
        printf("Erro: A fila esta cheia! Nao e possivel adicionar mais senhas.\n");
        return;
    }
    fila->tras = (fila->tras + 1) % TAMANHO;
    fila->senhas[fila->tras] = senha;
    fila->tamanho++;
    printf("Senha %d adicionada a fila.\n", senha);
}

void atenderSenha(Fila *fila) {
    if (filaVazia(fila)) {
        printf("Erro: A fila esta vazia! Nao ha senhas para atender.\n");
        return;
    }
    int senhaAtendida = fila->senhas[fila->frente];
    fila->frente = (fila->frente + 1) % TAMANHO;
    fila->tamanho--;
    printf("Senha %d atendida.\n", senhaAtendida);
}

void imprimirFila(Fila *fila) {
    if (filaVazia(fila)) {
        printf("A fila esta vazia.\n");
        return;
    }
    printf("Fila de senhas: ");
    for (int i = 0; i < fila->tamanho; i++) {
        int indice = (fila->frente + i) % TAMANHO;
        printf("%d ", fila->senhas[indice]);
    }
    printf("\n");
}

int main() {
    Fila fila;
    inicializarFila(&fila);

    int opcao, senha = 1;

    do {
        printf("\nMenu:\n");
        printf("1. Gerar nova senha\n");
        printf("2. Atender senha\n");
        printf("3. Imprimir fila\n");
        printf("0. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                inserirSenha(&fila, senha++);
                break;
            case 2:
                atenderSenha(&fila);
                break;
            case 3:
                imprimirFila(&fila);
                break;
            case 0:
                printf("Encerrando o programa.\n");
                break;
            default:
                printf("Opcao invalida. Tente novamente.\n");
        }
    } while (opcao != 0);

    return 0;
}
