#include <bits/stdc++.h>
#define rep(i, a, n) for (int i = a; i < n; ++i)
#define dbg(x) cout << (#x) << " is " << x << "\n"
using namespace std;

int t, n, m, c[1005][1005], res;

void solve(int points, int i, int j) {
  if (i+1 == n && j+1 == m) {
    // dbg(points + c[i][j]);
    res = max(res, points + c[i][j]);
    return;
  }
  if (i < n)
    solve(points + c[i][j], i+1, j);
  if (j < m)
    solve(points + c[i][j], i, j+1);
}

int main()
{
  scanf("%d", &t);
  while (t--) {
    res = 0;
    scanf("%d%d", &n, &m);
    rep(i, 0, n)
      rep(j, 0, m)
        scanf("%d", &c[i][j]);
    solve(0, 0, 0);
    printf("%d\n", res);
  }

  return 0;
}

// 2
// 5 6
// 1 6 2 3 4 5
// 9 1 2 1 8 6
// 2 5 8 6 10 5
// 8 5 9 4 2 8
// 23 5 8 5 9 6
// 2 3
// 1 5 3
// 4 2 6
