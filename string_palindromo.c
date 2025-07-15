#include <stdio.h>
#include <string.h>

int main() {
  char STR[1001];
  scanf("%1000s", STR);
  char STRaux[1001];
  for (int i = 0; i < 1001; i++) {
    STRaux[i] = STR[i];
  }
  // STRaux tem a mesma palavra que STR 

  size_t len = strlen(STR);

  for (int i = 0; i < len; i++) {
    STR[i] = STRaux[len-1 -i];
  }

  for (int i = 0; i < len; i++) {
     printf("%c", STR[i]);
  }
  
  return 0;
}
