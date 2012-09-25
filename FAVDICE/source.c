#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);
  while(t--) {
    int n;
    scanf("%d", &n);
    int i;
    float sum = 0.0;
    for(i = 1; i <= n; ++i) {
      sum += ((float)n)/i;
    }
    printf("%.2f\n", sum);
  }
}
