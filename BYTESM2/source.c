#include <stdio.h>

int main() {
  int T;
  scanf("%d", &T);
  int t[110][110];
  int h, w;
  int i, j;
  while(T--) {
    scanf("%d %d", &h, &w);
    for(i = 1; i <= h; ++i) {
      for(j = 1; j <= w; ++j) {
        scanf("%d", &t[i][j]);
      }
    }
    for(i = h - 1; i >= 1; --i) {
      for(j = 1; j <= w; ++j) {
        int max = t[i+1][j];
        if(j-1 > 0 && max < t[i+1][j-1]) {
          max = t[i+1][j-1];
        } 
        if(j+1 <= w && max < t[i+1][j+1]) {
          max = t[i+1][j+1];
        } 
        t[i][j] += max;
      }
    }
    
    int max = t[1][1];
    for(j = 2; j <= w; ++j) {
      if(max < t[1][j]) {
        max = t[1][j];
      }
    }
    printf("%d\n", max);
  }
}
