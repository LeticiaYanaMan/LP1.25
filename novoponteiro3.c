#include <stdio.h>

void printPtr(int*** ptr);

int main() {
  int n = 5;
  int *ptr = &n;
  int **dPtr = &ptr;

  printPtr(&dPtr);

  return 0;
}

void printPtr(int*** ptr) {
  printf("%d\n", ***ptr);
}


  
