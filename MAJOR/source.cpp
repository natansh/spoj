#include <cstdio>

int d[100010];
int main() {
  int t;
  scanf("%d", &t);

  while(t--) {
    int n;
    scanf("%d", &n);

    if(n == 0) {
      printf("NO\n");
      continue;
    }

    int num = 0;
    int count = 0;
    int prev_num;

    for(int i = 0; i < n; ++i) {
      scanf("%d", &num);
      d[i] = num; 

      if(count == 0) {
        prev_num = num;
        count = 1;
      } else {
        if(prev_num == num) {
          count++;
        } else {
          count--;
        }
      }
    }

    int count_max = 0;
    for(int i = 0; i < n; ++i) {
      if(d[i] == prev_num) {
        count_max++;
      }
    }

    if(count_max > n/2) {
      printf("YES %d\n", prev_num);
    } else {
      printf("NO\n");
    }
  }
}
