#include <stdio.h>

int main() {
  long N;
  scanf("%ld", &N);
  long mod = N % 10;
  if(mod != 0) {
    printf("1\n%d\n", (int)mod);
  } else {
    printf("2\n");
  }
  return 0;
}
