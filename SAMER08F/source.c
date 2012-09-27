#include <stdio.h>

int main() {
  while(1) {
    int N;
    scanf("%d", &N);
    if(N == 0) return 0;
    printf("%d\n", (N * (N+1) * (2 * N + 1))/6);
  }
  return 0;
}
