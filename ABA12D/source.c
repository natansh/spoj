#include <stdio.h>
#include <math.h>

int isprime(int a) {
  int root = sqrt(a);
  int i;
  if(a == 1) return 0;
  for(i = 2; i <= root; ++i) {
    if(a % i == 0) return 0;
  }
  return 1;
}

int main() {
  int T;
  scanf("%d", &T);
  while(T--) {
    int A, B;
    scanf("%d %d", &A, &B);

    int i;
    int count = 0;
    if(A <= 2 && B>= 2) count++;

    for(i = 2; ; ++i) {
      int sq = i * i;
      if(sq > B) {
        break;
      }

      if(sq >= A) {
        int j;
        int sum = 1 + sq;
        for(j = 2; j < i; ++j) {
          if(sq % j == 0) {
            sum += j + sq/j;
          }
        }
        sum += i;

        if(isprime(sum)) {
          count++;
          //printf("\n >>>>> P: sum: %d i: %d root: %d\n", sum, sq, i);
        }
      }
    }
    printf("%d\n", count);
  }
}
