#include <stdio.h>

int char_val(char a) {
  if(a == 'T') return 0;
  return 1;
}
int val(char a, char b, char c) {
  return char_val(a) * 4 + char_val(b) * 2 + char_val(c);
}

int main() {
  int P;
  scanf("%d", &P);

  int case_num = 1;
  while(P--) {
    int N;
    scanf("%d", &N);
    
    int i;
    char s[100];
    scanf("%s", s);

    int values[8];
    for(i = 0; i < 8; ++i) {
      values[i] = 0;
    }

    char a = s[0], b = s[1], c;

    for(i = 2; i < 40; ++i) {
      c = s[i];
      values[val(a,b,c)]++;
      a = b;
      b = c;
    }

    printf("%d", case_num);
    for(i = 0; i < 8; ++i) {
      printf(" %d", values[i]);
    }
    printf("\n");

    case_num++;
  }
  return 0;
}
