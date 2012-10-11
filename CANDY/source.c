#include <stdio.h>
#include <math.h>

int packets[10005];

int main() {
  while(1) {
    int N;
    scanf("%d", &N);
    if(N == -1) break;
    
    int i, sum = 0;
    for(i = 0; i < N; ++i) {
      scanf("%d", &(packets[i]));
      sum += packets[i];
    }
    if(sum % N != 0) {
      printf("%d\n", -1);
      continue;
    }
    int average = sum/N;
    int diff = 0;
    for(i = 0; i < N; ++i) {
      diff += abs(packets[i] - average);
    }
    printf("%d\n", diff/2);
  }
  return 0;
}
