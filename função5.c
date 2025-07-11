#include <stdio.h>

int fat(int F) {
  if (F == 0) {
    return 0;
  }
  else if (F == 1) {
    return 1;
  }
  else {
    return F * fat(F -1);
  }
}

int main() {
  int f;
  scanf("%d", &f);
  printf("%d\n", fat(f));

  return 0;
}
