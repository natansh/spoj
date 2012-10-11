#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int min(int a, int b) {
  return (a > b)? b : a; 
}

int main() {
  int T;
  scanf("%d", &T);
  char A[2010], B[2010];
  int *E[2010];

  int i, j;

  for(i = 0; i < 2010; ++i) {
    E[i] = malloc(sizeof(int) * 2010);
  }

  while(T--) {
    scanf("%s", &A[1]);
    int M = strlen(A + 1);
    scanf("%s", &B[1]);
    int N = strlen(B + 1);
    for(i = 0; i <= M; ++i) {
      E[i][0] = i;
    }
    for(j = 0; j <= N; ++j) {
      E[0][j] = j;
    }

    for(i = 1; i <= M; ++i) {
      for(j = 1; j <= N; ++j) {
        E[i][j] = min(1 + E[i][j-1], min(1 + E[i-1][j], ((A[i] == B[j])? 0 : 1) + E[i-1][j-1]));
      }
    }

    printf("%d\n", E[M][N]);
  }
}
