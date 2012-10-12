#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() { 
  int t;
  scanf("%d", &t);

  while(t--) {
    char a[50], b[50], c[50];
    scanf("%s + %s = %s", a, b, c);

    int num1, num2, num3;
    // Find out in which string machula is present
    if(strstr(a, "machula") != NULL) {
      num2 = atoi(b);
      num3 = atoi(c);
      num1 = num3 - num2;
      sprintf(a, "%d", num1);
    } else if(strstr(b, "machula") != NULL) {
      num1 = atoi(a);
      num3 = atoi(c);
      num2 = num3 - num1;
      sprintf(b, "%d", num2);
    } else { 
      num1 = atoi(a);
      num2 = atoi(b);
      num3 = num1 + num2;
      sprintf(c, "%d", num3);
    }
    printf("%s + %s = %s\n", a, b, c);
  }

  return 0;
}
