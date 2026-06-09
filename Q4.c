#include <stdio.h>

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
    Produto estoque[3] = {
        {1, 100.0},
        {2, 250.0},
        {3, 80.0}
    };

    imprimir_produtos(estoque, 3);

    return 0;
}