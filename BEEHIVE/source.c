#include <stdio.h>

int main() {
  while(1) {
    int N;
    scanf("%d", &N);
    if(N == -1) break;
    int i = 0, n = 0;

    for(i = 0; (n = 3 * i * (i + 1) + 1) < N; ++i);
    if(n == N) {
      printf("Y\n");
    } else {
      printf("N\n");
    }
  }

  return 0;
}
