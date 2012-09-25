#include <stdio.h>

#define MAX 11
int main() {
  while(1) {
    int A, D;
    scanf("%d %d", &A, &D);
    if(A == 0 && D == 0) break;
    int i;
    int B[MAX], C[MAX];
    int min_b = 100000;
    for(i = 0; i < A; ++i) {
      scanf("%d", &(B[i]));
      if(B[i] < min_b) {
        min_b = B[i];
      }
    }

    int min_c = 100000;
    int second_min_c = 100001;
    for(i = 0; i < D; ++i) {
      scanf("%d", &(C[i]));
      if(C[i] < second_min_c) {
        if(C[i] < min_c) {
          second_min_c = min_c;
          min_c = C[i];
        } else {
          second_min_c = C[i];
        }
      }
    }

    if(min_b < second_min_c) {
      printf("Y\n");
    } else {
      printf("N\n");
    }
  }
  return 0;
}
