#include <bits/stdc++.h>
#define rep(i,a,n) for (int i = a; i < n; ++i)
#define dbg(x) cout << (#x) << " is " << x << "\n";
using namespace std;

typedef long long ll;
const ll LL_INF = 0x3f3f3f3f3f3f3f3f;

int n, a[111];
ll dp[111][111];

int getRangeSum(int i, int j) {
  return (a[j] - (i > 0 ? a[i-1] : 0) + 100) % 100;
}

ll solve(int i, int j) {
  if (i == j) return 0;
  if (dp[i][j] != -1)
    return dp[i][j];
  dp[i][j] = LL_INF;
  rep(k, i, j)
    dp[i][j] = min(dp[i][j], solve(i, k) + solve(k+1, j) +
                   getRangeSum(i, k) * getRangeSum(k+1, j));
  return dp[i][j];
}

int main() {
  while (scanf("%d", &n) != EOF) {
    rep(i, 0, n) scanf("%d", &a[i]);
    rep(i, 1, n) {
      a[i] += a[i-1];
      a[i] %= 100;
    }
    memset(dp, -1, sizeof dp);
    printf("%lld\n", solve(0, n-1));
  }

  return 0;
}

// 2
// 18 19
// 3
// 40 60 20
