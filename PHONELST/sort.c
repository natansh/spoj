#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *s[10000];

int strcomp(const void *a, const void *b) {
  char *s = *((char **)a);
  char *t = *((char **)b);

  return strcmp(s, t);
}

int is_prefix(char *s, char *t) {
  while(*s == *t && *s != '\0' && *t != '\0') {
    s++;
    t++;
  }
  return ((*s == '\0' || *t == '\0')? 1 : 0);
}

int main() {
  int t;
  scanf("%d", &t);
  while(t--) {
    int n;
    scanf("%d", &n);

    int i;
    for(i = 0; i < n; ++i) {
      s[i] = (char *)malloc(12 * sizeof(char));
      scanf("%s", s[i]);
    }
    qsort(s, n, sizeof(char *), strcomp);

    int flag = 1;
    for(i = 0; i < n-1; ++i) {
      //printf("%s %s\n", s[i], s[i+1]);
      if(is_prefix(s[i], s[i+1])) {
        flag = 0;
        break;
      }
    }

    if(flag == 1) {
      printf("YES\n");
    } else {
      printf("NO\n");
    }
  }
}
