#include <cstdio>
#include <stack>
#include <climits>


char shop[30][30];
bool intree[30][30];
int distance[30][30];

int w, h;
bool is_valid(int i, int j) {
  return (i >= 0 && i < h && j >= 0 && j < w);
}

void update_distance(int vi, int vj, int x, int y) {
  if(is_valid(vi+x, vj+y) && shop[vi+x][vj+y] != 'X' && distance[vi+x][vj+y] > shop[vi+x][vj+y] - '0' + distance[vi][vj]) {
    distance[vi+x][vj+y] = shop[vi+x][vj+y] - '0' + distance[vi][vj];
  }
}

int main() {
  
  while(1) {
    scanf("%d %d\n", &w, &h);
    if(w == 0 && h == 0) break;
    
    int i, j;
    int si, sj;
    int ei, ej;

    for(i = 0; i < h; ++i) {
      for(j = 0; j < w; ++j) {
        scanf("%c", &shop[i][j]);
        intree[i][j] = false;
        distance[i][j] = INT_MAX/2;

        if(shop[i][j] == 'S') {
          si = i;
          sj = j;
        }

        if(shop[i][j] == 'D') {
          ei = i;
          ej = j;
          shop[i][j] = '0';
        }
      }
      scanf("\n");
    }
    distance[si][sj] = 0;

    int vi = si, vj = sj;

    while(intree[vi][vj] == false) {
      intree[vi][vj] = true;

      update_distance(vi, vj, 1, 0);
      update_distance(vi, vj, 0, 1);
      update_distance(vi, vj, -1, 0);
      update_distance(vi, vj, 0, -1);

      vi = 0; vj = 0;
      int min_dist = INT_MAX/2;
      for(i = 0; i < h; ++i) {
        for(j = 0; j < w; ++j) {
          if(intree[i][j] == false && distance[i][j] < min_dist) {
            min_dist = distance[i][j];
            vi = i; vj = j;
          }
        }
      }
    }
    printf("%d\n", distance[ei][ej]);
  }
  return 0;
}
