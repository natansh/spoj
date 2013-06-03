#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
  int capital[1001], non_capital[1001];
  char s[1001];

  int i, j;

  while(scanf("%s", s) != EOF) {
    int l = strlen(s);

    for(i = 0; i <= l; ++i) {
      capital[i] = 0;
      non_capital[i] = 0;
    }

    for(j = l - 1; j >= 0; --j) {
      capital[j] = non_capital[j + 1] + (isupper(s[j])? 0: 1);
      non_capital[j] = capital[j + 1] + (isupper(s[j])? 1: 0);
    }
    printf("%d\n", (capital[0] < non_capital[0])? capital[0]: non_capital[0]);
  }
  return 0;
}
