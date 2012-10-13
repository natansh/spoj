#include <stdio.h>

void reverse(int a[], int len) {
  int i = 0, j = len - 1;
  while(i < j) {
    int temp = a[i];
    a[i++] = a[j];
    a[j--] = temp;
  }
}

int parse_digit() {
  int num = 0;
  int c;
  while((c = getchar()) != '\n') {
    if(c == '.') ++num;
    if(c == '-') num += 5;
  }
  return num;
}

int main() {
  while(1) {
    int i;
    long long result;

    int num_digits;
    scanf("%d\n", &num_digits);
    if(num_digits == 0) break;

    int a[50];
    for(i = 0; i < num_digits; ++i) {
      a[i] = parse_digit();
    }
    reverse(a, num_digits);
    int value = 1;

    result = 0;
    for(i = 0; i < num_digits; ++i) {
      result = result + a[i] * value;

      if(i == 1) {
        value = value * 18;
      } else {
        value = value * 20;
      }
    }
    printf("%lld\n", result);
  }
  return 0;
}
