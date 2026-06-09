#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int id;
    float preco;
} Produto;

void imprimir_produtos(Produto *ptr, int quantidade) {
    for (int i = 0; i < quantidade; i++) {
        printf("ID: %d | Preco: %.2f\n", (ptr + i)->id, (ptr + i)->preco);
    }
}

int main() {
    int quantidade;

    printf("Quantidade de produtos: ");
    scanf("%d", &quantidade);

    Produto *estoque = malloc(quantidade * sizeof(Produto));

    for (int i = 0; i < quantidade; i++) {
        printf("Produto %d\n", i + 1);
        printf("ID: ");
        scanf("%d", &(estoque + i)->id);
        printf("Preco: ");
        scanf("%f", &(estoque + i)->preco);
    }

    imprimir_produtos(estoque, quantidade);

    free(estoque);

    return 0;
}