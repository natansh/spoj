#include <stdio.h>

unsigned long long fast_exp(int n, int k) {
  if(k == 0) return 1;
  int res = fast_exp(n, k/2);
  if(k % 2 == 0) {
    return res * res;
  } else {
    return n * res * res;
  } 
}

int main() {
  while(1) {
    int n, d;
    scanf("%d %d", &n, &d);
    if(n == 0 && d == 0) break;
    printf("%llu\n", fast_exp(n, d));
  }
}
