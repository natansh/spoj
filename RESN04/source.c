#include <stdio.h>

int main() {
  int T;
  scanf("%d", &T);

  while(T--) {
    int N;
    scanf("%d", &N);

    int i;
    int num;
    int count = 0;
    for(i = 1; i <= N; ++i) {
      scanf("%d", &num);
      count += num/i;
    }
    printf("%s\n", ((count % 2 != 0)? "ALICE": "BOB" ));
  }
  return 0;
}
