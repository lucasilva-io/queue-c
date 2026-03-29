#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM_MAX 5

typedef struct {
    int vetor[TAM_MAX];
    int fim;
} Fila;

Fila fila;

int gerarNumero() {
    return (1 + rand() % 10); // 1 a 10
}

void exibicao() {
    for (int i = 0; i < fila.fim; i++) {
        printf("%d ", fila.vetor[i]);
    }
}

void adicionar() {
    for (int i = 0; i < TAM_MAX; i++) {
        fila.vetor[i] = gerarNumero();
        fila.fim++;
    }
}

int main(void) {
    srand(time(NULL));
    adicionar();
    exibicao();
    printf("\n");

    for (int i = 0; i < (fila.fim - 1); i++) {
        fila.vetor[i] = fila.vetor[i + 1];
    }
    fila.fim--;

    exibicao();

    return 0;
}
