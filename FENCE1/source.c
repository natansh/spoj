#include <stdio.h>

int main() {
  double pi = 3.1415926535897932384626433832795028841971693993751058209749445923078;
  while(1) {
    int N;
    scanf("%d", &N);
    if(N == 0) break;
    printf("%.2f\n", (N * N)/(2.0 * pi));
  }
  return 0;
}
