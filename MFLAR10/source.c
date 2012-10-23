#include <stdio.h>
#include <ctype.h>

#define TRUE 1
#define FALSE 0

int main() {
  char *s = NULL;
  size_t sz = 0;
  while(1) {
    getline(&s, &sz, stdin);
    int i = 0;

    while(i < sz && s[i] == ' ') i++;
    if(i < sz && s[i] == '*') break;
    int start_char = -1;
    int inword = FALSE;

    int is_tautogram = TRUE; 
    for(; s[i] != 10; ++i) {
      if(s[i] == ' ' && inword == TRUE) {
        inword = FALSE;
      } else if(s[i] != ' ' && inword == FALSE) {
        inword = TRUE;
        if(islower(s[i])) {
          s[i] = toupper(s[i]);
        }

        if(start_char == -1) {
          start_char = s[i];
        } else if(start_char != s[i]) {
          is_tautogram = FALSE;
          break;
        }
      }
    }
    if(is_tautogram) {
      printf("Y\n");
    } else {
      printf("N\n");
    }
  }
  return 0;
}
