#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int sieve_of_eratosthenes(int res[], int num) {
  int *x = (int *)malloc((num+1) * sizeof(int));
  memset(x, sizeof(x), 0);

  int i, j, k;
  for(i = 2; i <= num; ++i) {
    if(x[i] == 0) {
      res[k++] = i;
      for(j = i; j <= num; j+= i) {
        x[j] = 1;
      }
    }
  }
  return k;
}

int main() {
  int res[1000001], num_res;
  num_res = sieve_of_eratosthenes(res, 1000000);

  int T;
  scanf("%d", &T);
  while(T--) {
    int N;
    scanf("%d", &N);
    int phi = N, i;
    for(i = 0; i < num_res && res[i]*res[i] <= N; ++i ) {
      if(N % res[i] == 0) {
        phi = (phi * (res[i] - 1))/res[i];
      }
      while(N % res[i] == 0) { 
        N = N/res[i];
      }
    }
    if (N > 1) phi -= phi / N; 
    printf("%d\n", phi);
  }
}
