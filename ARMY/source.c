#include <stdio.h>
#include <stdlib.h>

int intcomp(const void *a, const void *b) {
  return *((int *)a) - *((int *)b);
}

int main() {
  int T;
  scanf("%d", &T);
  while(T--) {
    int NG, NM;
    scanf("%d %d", &NG, &NM);
    int i, j;
    int *G = malloc(sizeof(int) * NG);
    int *M = malloc(sizeof(int) * NM);

    for(i = 0; i < NG; ++i) {
      scanf("%d", &G[i]);
    }
    for(i = 0; i < NM; ++i) {
      scanf("%d" ,&M[i]);
    }

    qsort(G, NG, sizeof(int), intcomp);
    qsort(M, NM, sizeof(int), intcomp);

    i = 0;
    j = 0;
    while(i < NG && j < NM) {
      if(G[i] < M[j]) {
        i++;
      } else {
        j++;
      }
    }

    if(i < NG) {
      printf("Godzilla\n");
    } else {
      printf("MechaGodzilla\n");
    }
  }
  return 0;
}
