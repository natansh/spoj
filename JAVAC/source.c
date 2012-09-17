#include <stdio.h>
#include <ctype.h>

int main() {
  char s[1000], d[300];
  int ret;
  while(scanf("%s", s) != EOF) {
    char *p = s, *q = d;
    char mode = 's';
    if(islower(*p)) {
      while(*p) {
        if(*p == '_') {
          if(mode == 'j' || !islower(*(p+1))) {
            mode = 'e';
            break;
          } 
          *q++ = toupper(*(p+1));
          p+=2;
          mode = 'c'; 
        } else if (isupper(*p)) {
          if(mode == 'c') {
            mode = 'e';
            break;
          }
          *q++ = '_';
          *q++ = tolower(*p++);
          mode = 'j';
        } else {
          *q++ = *p++;
        }
      }
    } else {
      mode = 'e';
    }
    *q = '\0';
    if(mode == 'e') {
      printf("Error!\n");
    } else {
      printf("%s\n", d);
    }
  }
}
