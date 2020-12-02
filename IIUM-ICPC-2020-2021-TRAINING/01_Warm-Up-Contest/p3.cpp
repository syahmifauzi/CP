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

int n, x, xMax;

int main()
{
  s(n);
  rep(i, 0, n) {
    s(x);
    xMax = max(xMax, x);
  }
  printf("%d\n", max(0, xMax - 25));

  return 0;
}
