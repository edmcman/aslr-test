#include <stdio.h>
#include "lib.h"

int data = 42;

int main() {
  int stack = 10;

  int* heap = malloc(sizeof(int));

  printf("data = %p, stack = %p, lib = %p, heap = %p\n", &data, &stack, what(), heap);

  return 0;
}
