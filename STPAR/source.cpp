#include <cstdio>
#include <stack>

int main() {
  while(1) {
    int n;
    scanf("%d", &n);
    if(n == 0) break;
    std::stack<int> s;
    s.push(2000);

    int a[1050];

    int i;
    int flag = 1;
    for(i = 1; i <= n; ++i) {
      scanf("%d", &a[i]);
    }
    int k = 1;
    for(i = 1; i < n; ++i) {
      while(k == s.top()) {
        k++;
        s.pop();
      }
      if(a[i] != k) {
        if(a[i] < s.top()) {
          s.push(a[i]);
        } else {
          flag = 0;
          break;
        }
      } else {
        k++;
      }
    }
    if(flag == 0) {
      printf("no\n");
    } else {
      printf("yes\n");
    }
  }
  return 0;
}
