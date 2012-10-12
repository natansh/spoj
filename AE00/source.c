#include <stdio.h>

int main() {
  int N;
  scanf("%d", &N);
  
  int i, j;
  int count = 0;
  for(i = 1; i <= N; ++i) {
    for(j = i; i * j <= N; ++j) {
      ++count;
    }
  }
  printf("%d\n", count);
  return 0;
}
