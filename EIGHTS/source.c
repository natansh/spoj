#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);
  while(t--) {
    unsigned long long k;
    scanf("%llu", &k);

    unsigned long long a[4] = {192, 442, 692, 942};
    printf("%llu\n", (((k-1)/4) * 1000) + a[(k-1)%4]);
  }
  return 0;
}
