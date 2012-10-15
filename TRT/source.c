#include <cstdio>
#include <tr1/unordered_map>

int cost[2010][2010];
int main() {
  int N;
  int v[2500];
  int p[2500];

  p[0] = 0;

  scanf("%d", &N);
  for(int i = 1; i <= N; ++i) {
    scanf("%d", &v[i]);
    p[i] = v[i] + p[i - 1];
    cost[i][i] = v[i];
  }

  for(int k = 1; k < N; ++k) {
    for(int i = 1; i + k <= N; ++i) {
      int j = i + k;
      cost[i][j] = std::max(v[i] + p[j] - p[i] + cost[i+1][j], v[j] + p[j-1] - p[i-1] + cost[i][j-1]);
    }
  }

  printf("%d\n", cost[1][N]);
  return 0;
}
