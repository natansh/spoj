#include <cstdio>
#include <algorithm>
#include <vector>
#define MAX_N 110

int main() {
  int N, M;
  int degree[MAX_N];
  bool used[MAX_N] = {false};
  std::vector<int> edges[MAX_N];

  scanf("%d %d", &N, &M);
  
  int i, j;
  for(i = 1; i <= N; ++i) {
    degree[i] = 0;
  }

  for(i = 1; i <= M; ++i) {
    int node, deg;
    scanf("%d %d", &node, &deg);
    degree[node] += deg;
    for(j = 1; j <= degree[node]; ++j) {
      int dependency;
      scanf("%d", &dependency);
      edges[dependency].push_back(node);
    }
  }

  int printed_nodes = 0;
  bool first_case = true;
  std::vector<int> f;
  while(printed_nodes < N) {
    for(i = 1; i <= N; ++i) {
      if(used[i] == false && degree[i] == 0) {
        used[i] = true;
        f.push_back(i);
      }
    }
    sort(f.begin() + printed_nodes, f.end());
    int low = f[printed_nodes];
    if(first_case) {
      first_case = false;
      printf("%d", low);
    } else {
      printf(" %d", low);
    }
    for(j = 0; j < edges[low].size(); ++j) {
      degree[edges[low][j]]--;
    }
    printed_nodes++;
  }
  printf("\n");
  return 0;
}
