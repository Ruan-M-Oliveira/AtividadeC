#include <stdio.h>

typedef struct {
    int id;
    float preco;
} Produto;

void aplicar_desconto(Produto *p, float desconto) {
    p->preco = p->preco * (1 - desconto / 100);
}

int main() {
    Produto produto = {1, 100.0};

    aplicar_desconto(&produto, 10);

    printf("ID: %d\n", produto.id);
    printf("Preco: %.2f\n", produto.preco);

    return 0;
}