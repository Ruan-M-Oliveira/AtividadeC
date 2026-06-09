#include <stdio.h>

void aplicar_desconto(float *preco, float desconto) {
    *preco = *preco * (1 - desconto / 100);
}

int main() {
    float preco = 100.0;

    aplicar_desconto(&preco, 10);

    printf("Preco: %.2f\n", preco);

    return 0;
}