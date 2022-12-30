#include <stdio.h>

void troca(int *a, int *b) {
  printf("Endere�o de a: %p\n", a);
  printf("Valor de a: %d\n", *a);
  printf("Endere�o de b: %p\n", b);
  printf("Valor de b: %d\n", *b);
  int temp = *a;
  *a = *b;
  *b = temp;
}

int main() {
  int A = 1, B = 2;
  printf("Antes da troca: A = %d, B = %d\n", A, B);
  troca(&A, &B);
  printf("Depois da troca: A = %d, B = %d\n", A, B);
  return 0;
}

