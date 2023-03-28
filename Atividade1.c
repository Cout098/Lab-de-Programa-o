#include <stdio.h>

int main() {
    float valor_compra, valor_desconto_10, valor_desconto_15;

    printf("Digite o valor da compra: ");
    scanf("%f", &valor_compra);

    valor_desconto_10 = valor_compra * 0.9;
    valor_desconto_15 = valor_compra * 0.85;

    printf("Valor com 10%% de desconto: R$ %.2f\n", valor_desconto_10);
    printf("Valor com 15%% de desconto: R$ %.2f\n", valor_desconto_15);

    return 0;
}

