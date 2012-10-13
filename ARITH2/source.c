#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);

  while(t--) {
    unsigned long long result;
    scanf("%llu", &result);
    unsigned long long operand;
    char operator;
    while(1) {
      scanf("%c", &operator);
      if(operator == '=') {
        printf("%llu\n", result);
        break;
      }

      scanf("%lld", &operand);

      switch(operator) {
        case '+':
          result += operand;
          break;
        case '-':
          result -= operand;
          break;
        case '/':
          result /= operand;
          break;
        case '*':
          result *= operand;
          break;
      }
    }
  }
  return 0;
}
