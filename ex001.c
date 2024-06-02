#include <stdio.h>

int main() {
    int num, i, evenCount = 0, oddCount = 0;

    printf("Digite o numero de elementos do vetor: ");
    scanf("%d", &num);

    int array[num];

    printf("Digite os elementos do vetor:\n");
    for(i = 0; i < num; i++) {
        scanf("%d", &array[i]);
    }

    for(i = 0; i < num; i++) {
        if(array[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    printf("Quantidade de elementos pares: %d\n", evenCount);
    printf("Quantidade de elementos impares: %d\n", oddCount);

    return 0;
}
