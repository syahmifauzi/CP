#include <bits/stdc++.h>
#define dbg(x) cerr << #x << " >> " << x << '\n'
#define rep(i, a, n) for (int i = a; i < n; ++i)
#define repr(i, a, n) for (int i = a; i > n; --i)
#define st first
#define nd second
#define mp make_pair
#define pb push_back
#define min(x, y) x < y ? x : y
#define max(x, y) x > y ? x : y
#define all(a) a.begin(), a.end()
#define alla(a, b) a, a + b
#define in(a, x) find(all(a), x) != a.end()
#define ina(a, b, x) find(alla(a, b), x) != a + b
#define sz(a) sizeof(a) / sizeof(a[0])
#define s(n) scanf("%d", &n)
#define sc(n) scanf(" %c", &n)
#define sl(n) scanf("%lld", &n)
#define sf(n) scanf("%lf", &n)
#define ss(n) scanf("%s", &n)
#define pws() printf(" ")
#define pnl() printf("\n")
#define p(n) printf("%d", n)
#define pc(n) printf("%c", n)
#define pl(n) printf("%lld", n)
#define pf(n) printf("%lf", n)
#define ps(n) printf("%s", n)
#define INF (int)1e9
#define EPS 1e-9
using namespace std;

int t, x, y, res;

int fac(int x) {
  if (x == 0 || x == 1)
    return 1;
  return x * fac(x - 1);
}

int main()
{
  s(t);
  while (t--) {
    s(x); s(y);
    res = (fac(x) / (fac(2) * fac(x-2))) * (fac(y) / (fac(2) * fac(y-2)));
    p(res); pnl();
  }

  return 0;
}

// 3
// 2 3
// 3 4
// 2 2
