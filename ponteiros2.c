#include <stdio.h>

int main() {
  float F;
  scanf("%f", &F);
  float *ptrF = &F;
  printf("%f\n", *ptrF);

  return 0;
}
