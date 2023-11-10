#include <stdio.h>

int main(void) {
  int arr[10];
  int maior, menor;
  for(int count = 0; count <= 9; count++) {
    printf("Digite o valor %d\n", count+1);
    scanf("%d", &arr[count]);
  }
  for(int count = 0; count <= 9; count++) {
    if (count == 0){
      maior = arr[count];
      menor = arr[count];
    }
    if (arr[count] > maior){
      maior = arr[count];
    } else {
      continue;
    }
    if (arr[count] < menor){
        menor = arr[count];
    } else {
      continue;
    }
  }
  printf("O maior número é %d\n", maior);
  printf("O menor número é %d\n", menor);
  printf("A diferença entre o maior e o menor é: %d", maior - menor);
  return 0;
}