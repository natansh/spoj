#include <stdio.h>
#include <math.h>

int main() {
  int t;
  scanf("%d", &t);

  while(t--) {
    long x;
    scanf("%ld", &x);
    long n = 0; //= (-1 + sqrt(1 + 8 * (x-1)))/2;
    int i = 1;
    for(i = 1; n < x; ++i) {
      n += i;
    }
    n -= i - 1;
    long a = x - n;
    long b = i - a;
    if(i % 2 == 0) {
      long temp = a;
      a = b;
      b = temp;
    }
    printf("TERM %ld IS %ld/%ld\n", x, a, b);
  }
  return 0;
}
