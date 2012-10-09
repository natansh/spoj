#include <stdio.h>

int main() {
  while(1) {
    int n;
    scanf("%d", &n);
    if(n == 0) break;
    int a[100004];
    int b[100004];

    int i;
    for(i = 1; i <= n; ++i) {
      scanf("%d", &a[i]);
      b[a[i]] = i;
    }
    for(i = 1; i <= n; ++i) {
      if(a[i] != b[i]) break;
    }
    if(i != n + 1) {
      printf("not ambiguous\n");
    } else {
      printf("ambiguous\n");
    }
  }
  return 0;
}
