#include <stdio.h>

void multiplicationTable(int numero) {
    printf("Tabuada de %d:\n", numero);
    for (int i = 1; i <= 10; ++i) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }
}

int main() {
    int number;

    printf("Digite um numero para calcular a tabuada: ");
    scanf("%d", &number);

    multiplicationTable(number);

    return 0;
}
