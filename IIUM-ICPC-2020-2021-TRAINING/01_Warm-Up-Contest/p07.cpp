#include <bits/stdc++.h>
#define dbg(x) cerr << #x << " >> " << x << '\n';
#define rep(i, a, n) for (int i = a; i < n; ++i)
#define repr(i, a, n) for (int i = a; i > n; --i)
#define st first
#define nd second
#define mp make_pair
#define pb push_back
#define all(a) a.begin(), a.end()
#define in(a, x) find(all(a), x) != a.end()
#define sz(a) sizeof(a) / sizeof(a[0])
#define s(n) scanf("%d", &n)
#define p(n) printf("%d", n)
#define pws() printf(" ")
#define pnl() printf("\n")
using namespace std;

typedef long long ll;
typedef pair<ll ,ll> pll;
typedef pair<int, int> pii;

int n, a[50][50], sum;

bool sumEqX(int row, int col, int x) {
  rep(i, 0, n)
    rep(j, 0, n)
      if (i != row && j != col)
        if (a[i][col] + a[row][j] == x)
          return true;
  return false;
}

bool isGood() {
  rep(i, 0, n)
    rep(j, 0, n)
      if (a[i][j] != 1)
        if (!sumEqX(i, j, a[i][j]))
          return false;
  return true;
}

int main()
{
  s(n);
  rep(i, 0, n) rep(j, 0, n) s(a[i][j]);
  printf(isGood() ? "Yes\n" : "No\n");

  return 0;
}
