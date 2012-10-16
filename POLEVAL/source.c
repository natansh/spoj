#include <stdio.h>

int main() {
  int n, k;
  int c[1010];
  int x;

  int case_num = 1;

  while(1) {
    scanf("%d", &n);
    if(n == -1) break;

    int i, j;
    for(i = 0; i <=n; ++i) {
      scanf("%d", &c[i]);
    }

    scanf("%d", &k);

    printf("Case %d:\n", case_num);
    for(i = 0; i < k; ++i) {
      scanf("%d", &x);
      long long poly = c[0];
      for(j = 1; j <= n; ++j) {
        poly = (poly * x) + c[j];
      }
      printf("%lld\n", poly);
    }
    ++case_num;
  }
  return 0;
}
