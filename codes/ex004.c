#include <stdio.h>

int main() {
    int array[10];
    int i, reference_value, count = 0;

    printf("Digite dez numeros inteiros:\n");
    for(i = 0; i < 10; i++) {
        scanf("%d", &array[i]);
    }

    printf("Digite um valor de referencia inteiro: ");
    scanf("%d", &reference_value);

    printf("-------------------------------------\n");

    printf("Numeros maiores que o valor de referencia:\n");
    for(i = 0; i < 10; i++) {
        if(array[i] > reference_value) {
            printf("%d ", array[i]);
        }
    }
    printf("\n");

    for(i = 0; i < 10; i++) {
        if(array[i] == reference_value) {
            count++;
        }
    }
    printf("O valor de referencia aparece %d vezes no vetor.\n", count);

    return 0;
}
