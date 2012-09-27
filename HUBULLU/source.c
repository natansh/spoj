#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);

  while(t--) {
    int N, P;
    scanf("%d %d", &N, &P);
    printf("%s wins.\n", (P == 0)? "Airborne": "Pagfloyd");
  }
  return 0;
}
