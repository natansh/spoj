#include <stdio.h>

#include <string.h>
#include <stdlib.h>

void compute_failure_function(char p[], int len, int f[]) {
  int i, j = 0;

  f[1] = 0;
  for(i = 2; i <= len; ++i) {
    while(j > 0 && p[i] != p[j+1]) {
      j = f[j];
    }
    if(p[i] == p[j+1]) {
      ++j;
    }
    f[i] = j;
  }
}

int main() {
  int start = 1;
  while(1) {
    int plen = 0;
    if(scanf("%d", &plen) != 1) break;
    if(start) {
      start = 0;
    } else {
      printf("\n");
    }

    char *p;
    int *f;
    p = malloc(sizeof(char) * (plen+10));
    f = malloc(sizeof(int) * (plen+10));
    scanf("%s\n", &p[1]);
    compute_failure_function(p, plen, f);

    int c;
    int i = 0, j = 0;
    while((c = getchar()) != '\n' && c != EOF) {
      ++i;
      while(j > 0 && c != p[j+1]) {
        j = f[j];
      }
      if(c == p[j+1]) {
        j++;
      }
      if(j == plen) {
        printf("%d\n", i - plen);
      }
    }
    free(p);
    free(f);
  }
  return 0;
}
