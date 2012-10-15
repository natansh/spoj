#include <stdio.h>

int main() {
  int T;
  scanf("%d", &T);

  int i;
  for(i = 1; i <= T; ++i) {
    long long r;
    scanf("%lld", &r);

    printf("Case %d: %.2lf\n", i, 4.0 * r * r + 0.25);
  }
  return 0;
}
