#include <stdio.h>
#include <limits.h>

typedef struct cell {
  int color;
  long long smoke;
} cell;

int min(int a, int b) {
  return ((a < b)? a : b);
}

int main() {
  int n;
  cell c[110][110];
  while(scanf("%d", &n) > 0) {
    int i, k, j, l;
    for(i = 1; i <= n; ++i) {
      scanf("%d", &(c[i][i].color));
      c[i][i].smoke = 0;
    }

    for(l = 1; l < n; ++l) {
      for(i = 1; i + l <= n; ++i) {
        j = i + l;
        long long min_smoke = INT_MAX;
        int min_color;
        for(k = i; k < j; ++k) {
          long long smoke = c[i][k].smoke + c[k+1][j].smoke + c[i][k].color * c[k+1][j].color;
          if(min_smoke > smoke) {
            min_smoke = smoke;
            min_color = (c[i][k].color + c[k+1][j].color) % 100;
          } 
        }
        c[i][j].smoke = min_smoke;
        c[i][j].color = min_color;
      }
    }

    printf("%lld\n", c[1][n].smoke);
  }
}
