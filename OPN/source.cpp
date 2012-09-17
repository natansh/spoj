#include <stack>
#include <cstdio>

int main() {
  int t;
  scanf("%d", &t);
  getchar();
  while(t--) {
    std::stack<char> s;
    char c;
    while((c = getchar()) != '\n') {
      if(c >= 'a' && c <= 'z') {
        putchar(c);
        continue;
      }
      switch(c) {
        case '(':
          s.push(c);
          break;
        case '+':
          s.push('+');
          break;
        case '-':
          while(s.top() == '+') {
            putchar('+');
            s.pop();
          }
          s.push('-');
          break;
        case '*':
          while(s.top() == '+' || s.top() == '-') {
            putchar(s.top());
            s.pop();
          }
          s.push('*');
          break;
        case '/':
          while(s.top() == '+' || s.top() == '-' || s.top() == '*') {
            putchar(s.top());
            s.pop();
          }
          s.push('/');
          break;
        case '^':
          while(s.top() == '+' || s.top() == '-' || s.top() == '*' || s.top() == '/') {
            putchar(s.top());
            s.pop();
          }
          s.push('^');
          break;
        case ')':
          while(s.top() != '(') {
            putchar(s.top());
            s.pop();
          }
          s.pop();
          break;
      }
    }
    putchar('\n');
  }
}
