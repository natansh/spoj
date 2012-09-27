#include <stdio.h>
#include <math.h>

int main() {
  int t;
  scanf("%d", &t);
  while(t--) {
    int N;
    scanf("%d", &N);
    int sum = 1;
    int sq = sqrt(N);
    int i;
    for(i = 2; i <= sq; ++i) {
      if(N % i == 0) {
        sum += i + N/i;
      }
    }
    if(sq * sq == N) {
      sum -= sq;
    }
    printf("%d\n", sum);

  }
  return 0;
}
