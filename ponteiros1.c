#include <stdio.h>

int main() {
  int nInteiro;
  
  scanf("%d", &nInteiro);

  int *ptrInt = &nInteiro;

  printf("%d\n", *ptrInt);

  return 0;

}
