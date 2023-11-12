#include <stdio.h>

int main() {
    int vetor[10]; // Declara um vetor de 10 elementos
    int numeros_impares[10]; // Vetor para armazenar os números ímpares
    int count = 0; // Contador para acompanhar o número de números ímpares

    // Preenche o vetor com 10 números
    for (int i = 0; i < 10; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    // Encontra e armazena os números ímpares
    for (int i = 0; i < 10; i++) {
        if (vetor[i] % 2 != 0) {
            numeros_impares[count] = vetor[i];
            count++;
        }
    }

    // Mostra os números ímpares
    printf("Números ímpares no vetor: ");
    for (int i = 0; i < count; i++) {
        printf("%d ", numeros_impares[i]);
    }
    printf("\n");

    return 0;
}
