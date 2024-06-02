#include <stdio.h>

void calculateIMC(float weight, float height) {
    float imc = weight / (height * height);

    printf("Seu IMC: %.2f\n", imc);

    if (imc < 18.5) {
        printf("Abaixo do peso.\n");
    } else if (imc < 25) {
        printf("Peso normal.\n");
    } else if (imc < 30) {
        printf("Sobrepeso.\n");
    } else if (imc < 35) {
        printf("Obesidade grau I.\n");
    } else if (imc < 40) {
        printf("Obesidade grau II.\n");
    } else {
        printf("Obesidade grau III.\n");
    }
}

int main() {
    float weight, height;

    printf("Digite seu peso em quilogramas: ");
    scanf("%f", &weight);

    printf("Digite sua altura em metros: ");
    scanf("%f", &height);

    calculateIMC(weight, height);

    return 0;
}
