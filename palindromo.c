#include <stdio.h>
#include <string.h>

int main() {
  char STR[1001];
  scanf("%1000s", STR);
  char STRaux[1001];
  for (int i = 0; i < 1001; i++) {
    STRaux[1001] = STR[1001];
  }
  // STRaux tem a mesma palavra que STR 

  size_t len = strlen(STR);
  // 
  for (int i = 0; i < (len + 1)/2; i++) {
    STR[i] = STRaux[len-i];
  }

  for (int i = 0; i < len + 1; i++) {
     printf("%c", STR[i]);
  }
  
  return 0;
}
  
