#include <stdio.h>

int main() {
    int vetor[8];
    int numeroProcurado;
    int posicao = -1; // Inicializa com -1 para indicar que o número não foi encontrado

    // Preenche o vetor com 8 números
    for (int i = 0; i < 8; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    // Solicita um número do teclado
    printf("Digite o número a ser procurado: ");
    scanf("%d", &numeroProcurado);

    // Procura o número no vetor
    for (int i = 0; i < 8; i++) {
        if (vetor[i] == numeroProcurado) {
            posicao = i; // Armazena a posição do número no vetor
            break; // Sai do loop, pois o número foi encontrado
        }
    }

    // Verifica se o número foi encontrado e exibe a mensagem apropriada
    if (posicao != -1) {
        printf("O número %d foi encontrado na posição %d do vetor.\n", numeroProcurado, posicao);
    } else {
        printf("O número %d não foi encontrado no vetor.\n", numeroProcurado);
    }

    return 0;
}
