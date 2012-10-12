#include <stdio.h>
#include <stdlib.h>

int main() {
  int t;
  scanf("%d", &t);

  unsigned long long *tri = (unsigned long long *)malloc(sizeof(unsigned long long) * 1000010);

  int i;
  tri[1] = 1;
  tri[2] = 5;
  tri[3] = 13;
  for(i = 4; i <= 1000000; ++i) {
    tri[i] = 1 + 3 * (tri[i - 1] - tri[i -2]) + tri[i - 3] + ((i % 2)? 0: 1);
  }
  while(t--) {
    int n;
    scanf("%d", &n);
    printf("%llu\n", tri[n]);
  }
  return 0;
}
