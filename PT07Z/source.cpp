#include <cstdio>
#include <vector>

std::vector< std::vector<int> > edge_list;
std::vector<bool> visited;
std::vector<int> distance;

void dfs_recursive(int source) {
  std::vector<int>::iterator i;
  for(i = edge_list[source].begin(); i != edge_list[source].end(); ++i) {
    if(visited[*i] != true) {
      visited[*i] = true;
      distance[*i] = distance[source] + 1;
      dfs_recursive(*i);
    }
  }
}

void dfs(int source) {
  visited[source] = true;
  distance[source] = 0;
  dfs_recursive(source);
}

int main() {
  int N;
  scanf("%d", &N);
  visited.resize(N + 1, false);
  distance.resize(N + 1, 0);
  edge_list.resize(N + 1);
  int i, u, v;
  for(i = 1; i < N; ++i) {
    scanf("%d %d", &u, &v);
    edge_list[u].push_back(v);
    edge_list[v].push_back(u);
  }

  // Run DFS
  dfs(1);
  int max_dist = 0, vertex;
  for(i = 1; i <= N; ++i) {
    if(distance[i] > max_dist) {
      vertex = i;
      max_dist = distance[i];
    }
  }

  visited.clear();
  visited.resize(N+1, false);
  dfs(vertex);
  max_dist = 0;
  for(i = 1; i <= N; ++i) {
    if(distance[i] > max_dist) {
      vertex = i;
      max_dist = distance[i];
    }
  }
  printf("%d\n", max_dist);

}
