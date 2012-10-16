#include <stdio.h>
#include <math.h>

int main() {
  while(1) {
    int x, y;
    scanf("%de%d", &x, &y);
    if(x == 0 && y == 0) break;

    int n = x * pow(10, y);

    int base = 1;
    while(base <= n) {
      base *= 2;
    }
    base/=2;

    printf("%d\n", 2 * (n-base) + 1);
  }
  return 0;
}
