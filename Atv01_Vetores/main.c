#include <stdio.h>

int main(void) {
    int arr[10];
    int maior;
    for(int count = 0; count <= 9; count++) {
        printf("Digite o valor %d\n", count+1);
        scanf("%d", &arr[count]);
    }
    for(int count = 0; count <= 9; count++) {
        if (count == 0){
            maior = arr[count];
        } else {
            if (arr[count] > maior){
                maior = arr[count];
            } else {
                continue;
            }
        }
    }
    printf("O maior número é %d", maior);
    return 0;
}