#include <cstdio>
#include <tr1/unordered_map>

typedef std::tr1::unordered_map<long long, long long> cache_map;

cache_map cache;

long long max(long long a, long long b) {
  return (a > b)? a : b;
}

long long bytelandian(long long N) {
  if(N == 0 || N == 1) return N;
  cache_map::iterator it = cache.find(N);
  if(it != cache.end()) {
    // Found in cache.
    return it->second;
  } else {
    long long val = max(bytelandian(N/2) + bytelandian(N/4) + bytelandian(N/3), N);
    cache.insert(std::make_pair(N, val));
    return val;
  }
}

int main() {
  while(1) {
    long long N;
    if(scanf("%lld", &N) <= 0) break;
    printf("%lld\n", bytelandian(N));
  }
  return 0;
}
