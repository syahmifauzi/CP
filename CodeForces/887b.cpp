#include <bits/stdc++.h>
#define rep(i, a, n) for (int i = a; i < n; ++i)
#define dbg(x) cout << (#x) << " is " << x << "\n"
using namespace std;

int n, a[3][6], t[110];

int main()
{
  rep(i, 0, 110) t[i] = 0;
  scanf("%d", &n);
  rep(i, 0, n) {
    rep(j, 0, 6) {
      scanf("%d", &a[i][j]);
      t[a[i][j]] = 1;
    }
  }
  if (n > 1)
    rep(i, 0, 6)
      rep(j, 0, 6)
        t[a[0][i]*10+a[1][j]] = t[a[1][i]*10+a[0][j]] = 1;
  if (n > 2)
    rep(i, 0, 6)
      rep(j, 0, 6)
        t[a[0][i]*10+a[2][j]] = t[a[2][i]*10+a[0][j]] = 1;
  if (n > 2)
    rep(i, 0, 6)
      rep(j, 0, 6)
        t[a[1][i]*10+a[2][j]] = t[a[2][i]*10+a[1][j]] = 1;
  rep(i, 1, 110) {
    if (!t[i]) {
      printf("%d\n", i-1);
      break;
    }
  }

  return 0;
}
