#include <cstdio>
#include <cmath>
#define N 1000000

int main() {
  int t;
  scanf("%d", &t);
  long double pi = 3.14159265358979323;
  long double e = 2.71828182845904523536;
  while(t--) {
    long long n;
    scanf("%lld", &n);
    long long len = 1;
    if(n >= 2) {
      len = (long long)ceil((log10((long double)2.0L * pi * n)/2.0L + n * log10((long double)n/e)));
    }
    printf("%lld\n", len);

  }
  return 0;
}
