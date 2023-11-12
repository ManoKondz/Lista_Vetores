#include <stdio.h>
#include <stdbool.h>

// Função para verificar se um número é primo
bool isPrime(int number) {
    if (number <= 1) {
        return false;
    }
    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int vetor[10];
    int numeros_primos[10];
    int count = 0;

    for (int i = 0; i < 10; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < 10; i++) {
        if (isPrime(vetor[i])) {
            numeros_primos[count] = vetor[i];
            count++;
        }
    }

    printf("Números primos no vetor: ");
    for (int i = 0; i < count; i++) {
        printf("%d ", numeros_primos[i]);
    }
    printf("\n");

    return 0;
}
