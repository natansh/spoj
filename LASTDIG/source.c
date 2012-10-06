#include <stdio.h>

int sq(int a) {
  return a * a;
}

int last_digit_recurse(int a, int b) {
  if(b == 0) return 1;
  if(b == 1) return a % 10;
  if(b % 2 == 0) {
    return sq(last_digit_recurse(a, b/2)) % 10;
  } else {
    return (sq(last_digit_recurse(a, b/2)) * a) % 10;
  }
}

int main() {
  int t;
  scanf("%d", &t);
  while(t--) {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d\n", last_digit_recurse(a, b));
  }
  return 0;
}
