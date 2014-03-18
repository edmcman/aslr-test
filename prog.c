#include <stdio.h>

int data = 42;

int main() {
  int stack = 10;

  printf("data = %p, stack = %p\n", &data, &stack);

  return 0;
}
