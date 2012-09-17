#include <stdio.h>

char a[100][100];

int main() {
  while(1) {
    int N, i, length;
    char c;
    scanf("%d", &N);
    getchar();
    if(N == 0) break;
    for(i = 0; (c = getchar()) != '\n'; ++i) {
      if((i/N) %2 == 0) {
        a[i/N][i%N] = c;
      } else {
        a[i/N][N - 1 - i%N] = c;
      }
    }
    length = i;
    int M = length/N;
    for(i = 0; i < length; ++i) {
      putchar(a[i%M][i/M]);
    } 
    putchar('\n');
  }
  return 0;
}
