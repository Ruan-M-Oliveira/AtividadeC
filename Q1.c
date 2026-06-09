#include <stdio.h>

int main() {
    float preco = 100.0;
    float *p = &preco;

    *p = *p * 1.10;

    printf("Preco: %.2f\n", preco);

    return 0;
}