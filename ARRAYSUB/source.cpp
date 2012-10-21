#include <cstdio>
#include <queue>
#include <utility>

const int max_n = 1000010;
int num[max_n];

int main() {
  int n;
  scanf("%d", &n);

  for(int i = 0; i < n; ++i) {
    scanf("%d", &num[i]);
  }

  int k;
  scanf("%d", &k);

  bool first_case = true;
  std::deque<int> q;
  for(int i = 0; i < n; ++i) {
    if(i >= k) {
      if(!q.empty() && q.front() <= i - k) {
        q.pop_front();
      }
    }
    while(!q.empty() && num[i] >= num[q.back()]) {
      q.pop_back();
    }
    q.push_back(i);
    if(i >= k - 1) {
      if(!first_case) {
        printf(" ");
      } else {
        first_case = false;
      }
      printf("%d", num[q.front()]);
    }
  }
  printf("\n");
}
