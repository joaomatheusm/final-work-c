#include <stdio.h>

int main() {
    int numbers[10];
    int i, count = 0;

    printf("Digite dez numeros inteiros:\n");
    for(i = 0; i < 10; i++) {
        scanf("%d", &numbers[i]);
    }

    for(i = 0; i < 10; i++) {
        if(numbers[i] % 5 == 0 && numbers[i] % 3 == 0) {
            count++;
        }
    }

    printf("Quantidade de numeros divisiveis por 5 e por 3 ao mesmo tempo: %d\n", count);

    return 0;
}
