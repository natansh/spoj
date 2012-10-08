#include <stdio.h>

int main() {
  int T;
  scanf("%d", &T);
  while(T--) {
    long long N;
    long long sum = 0;
    scanf("%lld", &N);
    int i;
    long long xi;
    for(i = 0; i < N; ++i) {
      scanf("%lld", &xi);
      sum = (sum + xi) % N;
    }
    if(sum == 0) {
      printf("YES\n");
    } else {
      printf("NO\n");
    }
  }
  return 0;
}
