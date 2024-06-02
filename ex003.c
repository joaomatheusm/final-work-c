#include <stdio.h>

int main() {
    int n, i, young = 0, adult = 0, elderly = 0;

    printf("Quantas pessoas serao entrevistadas? ");
    scanf("%d", &n);

    int ages[n];

    printf("Digite as idades das pessoas:\n");
    for(i = 0; i < n; i++) {
        do {
            printf("Pessoa %d: ", i + 1);
            scanf("%d", &ages[i]);
        } while (ages[i] < 18);
    }

    for(i = 0; i < n; i++) {
        if(ages[i] >= 18 && ages[i] < 35) {
            young++;
        } else if(ages[i] >= 35 && ages[i] < 65) {
            adult++;
        } else if(ages[i] >= 65 && ages[i] <= 80) {
            elderly++;
        }
    }

    printf("\nResultados da pesquisa:\n");
    printf("Jovens (>= 18 e < 35 anos): %d\n", young);
    printf("Adultos (>= 35 e < 65 anos): %d\n", adult);
    printf("Idosos (>= 65 anos): %d\n", elderly);

    return 0;
}
