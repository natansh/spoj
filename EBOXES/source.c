#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);
  while(t--) {
    int N, K, T, F;
    scanf("%d %d %d %d", &N, &K, &T, &F);
    printf("%d\n", ((F-N)/(K-1) + F));
  }
}
