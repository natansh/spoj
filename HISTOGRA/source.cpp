#include <cstdio>
#include <stack>

long long h[100010]; 

int main() {
  int n;
  while(1) {
    std::stack<std::pair<int, long long> > s;
    scanf("%d", &n);
    if(n == 0) break;

    for(int i = 0; i < n; ++i) {
      scanf("%lld", &h[i]);
    }

    int start = 0;
    long long max_area = 0; 
    for(int pos = 0; pos < n; ++pos) {
      long long height = h[pos];
      start = pos;
      while(true) {
        if(s.empty() || height > s.top().second) {
          s.push(std::make_pair(start, height));
        } else if(!s.empty() && height < s.top().second) {
          start = s.top().first;
          max_area = std::max(max_area, (pos - start) * s.top().second);
          s.pop();
          continue;
        } 
        break;
      }
    }
    while(!s.empty()) {
      max_area = std::max(max_area, (n - s.top().first) * s.top().second);
      s.pop();
    }

    printf("%lld\n", max_area);
  }
}

