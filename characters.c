#include <stdio.h>

int main() {
  char ch, s[8], sen[15];
  scanf("%c\n%s\n%15[^\n]s", &ch, s, sen);
  printf("%c\n%s\n%s", ch, s, sen);
  return 0;
}
