#include <stdio.h>
#include <string.h>

int main() {
  char a[6000];
  int count[3];
  count[0] = 1;
  count[1] = 1;
  while(1) {
    scanf("%s", &a[1]);
    
    if(a[1] == '0') break;
    int len = strlen(a + 1);

    int i;
    for(i = 2; i <= len; ++i) {
      count[2] = 0;
      if(a[i] != '0') {
        count[2] += count[1];
      }
      int prev = (a[i - 1] - '0') * 10 + (a[i] - '0');
      if( prev <= 26 && prev >= 10) {
        count[2] += count[0];
      }
    }
    printf("%d\n", count[len]);
  }
  return 0;
}
