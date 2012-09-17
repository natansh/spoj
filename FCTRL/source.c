#include <stdio.h>

int main() {
  int T;
  scanf("%d", &T);
  while(T--) {
    long N;
    scanf("%ld", &N);
    int num = 5, sum = 0;
    while(num <= N) {
      sum += N/num;
      num *= 5;
    }
    printf("%d\n", sum);
  }
}
