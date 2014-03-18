#include <stdio.h>
#include "lib.h"

int data = 42;

int main() {
  int stack = 10;

  printf("data = %p, stack = %p, lib = %p\n", &data, &stack, what());

  return 0;
}
