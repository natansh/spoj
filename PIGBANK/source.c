#include <stdio.h>
#include <assert.h>
#include <limits.h>

typedef struct coin {
  int P;
  int W;
} coin;

int coin_compare(coin *a, coin *b) {
  return a->W - b->W;
}

int main() {
  int T;
  scanf("%d", &T);

  coin coins[550];

  while(T--) {
    int E, F;
    scanf("%d %d", &E, &F);
    int N;
    scanf("%d", &N);

    int i, j;
    for(i = 1; i <= N; ++i) {
      scanf("%d %d", &(coins[i].P), &(coins[i].W));
    }
    qsort(coins+1, N, sizeof(coin), coin_compare);

    int cost[10050];

    cost[0] = 0;
    for(i = 1; i <= F-E; ++i) {
      cost[i] = INT_MAX/2;
      for(j = 1; j <= N && coins[j].W <= i; ++j) {
        int this_cost = cost[i - coins[j].W] + coins[j].P;
        if(cost[i] > this_cost) {
          cost[i] = this_cost;
        }
      }
    }


    if(cost[F-E] != INT_MAX/2) {
      printf("The minimum amount of money in the piggy-bank is %d.\n", cost[F-E]);
    } else {
      printf("This is impossible.\n");
    }
  }
  return 0;
}
