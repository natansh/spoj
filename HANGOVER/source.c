#include <stdio.h>

int main() {
  while(1) {
    double c;
    scanf("%lf", &c);
    if(c == 0.0) return 0;
    int i;
    double sum = 0;
    for(i = 2; sum < c; ++i) {
      sum += 1.0/i;
    }
    i -=2;
    printf("%d card(s)\n", i);
  }
}
