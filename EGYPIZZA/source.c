#include <stdio.h>

int main() {
  int N;
  scanf("%d", &N);

  int i;

  int quarter = 0;
  int half = 0;
  int three_fourth = 0;
  for(i = 0; i < N; ++i) {
    int a, b;
    scanf("%d/%d", &a, &b);
    if(b == 2) {
      half++;
    } else if(a == 1) {
      quarter++;
    } else {
      three_fourth++;
    }
  }
  
  int total_count = 1;
  total_count += half/2;
  half = half%2;
  if(half) {
    if(quarter) {
      quarter -= 2;
      if(quarter < 0) quarter = 0;
    } else {
    }
    total_count++;
  }
  total_count += three_fourth;
  quarter -= ((three_fourth < quarter)? three_fourth: quarter);

  total_count += (quarter + 3)/4;

  printf("%d\n", total_count);
}
