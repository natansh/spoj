#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);
  while(t--) {
    int n, k;
    scanf("%d %d", &n, &k);

    int i;
    int div;
    if(k - 1 < n - k) {
      div = k - 1;
    } else {
      div = n - k;
    }

    int start = n - div;
    unsigned long long fact = 1;
    for(i = div; i >= 1; --i) {
      fact = (fact * (n - i))/(div - i + 1);
    }
    printf("%llu\n", fact);
  }
}
