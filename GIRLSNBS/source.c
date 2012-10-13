#include <stdio.h>

int main() {
  while(1) {
    int G, B;
    scanf("%d %d", &G, &B);
    if(G == -1 && B == -1) {
      break;
    }
    if(G < B) {
      int temp = G;
      G = B;
      B = temp;
    }

    if (G == 0) {
      printf("0\n");
      continue;
    }
    if(G == B || G == B + 1) {
      printf("1\n");
      continue;
    }
    int val = G/(B + 1);
    if(G % (B+1) != 0) val++;
    printf("%d\n", val);
  }
  return 0;
}
