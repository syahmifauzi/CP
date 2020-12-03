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

int n, res[7];
char a[7];

int main()
{
  rep(i, 0, 7) res[i] = 0;

  s(n);
  rep(i, 0, n) {
    rep(j, 0, 7) {
      sc(a[j]);
      res[j] += a[j] - '0' == 1;
    }
  }

  sort(res, res + 7);

  p(res[6]); pnl();

  return 0;
}
