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
#define sll(n) scanf("%lld", &n)
#define p(n) printf("%d", n)
#define pws() printf(" ")
#define pnl() printf("\n")
#define fill(a, x) rep(i, 0, sz(a)) a[i] = x;
using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<ll ,ll> pll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pii> vii;
typedef vector<ll> vl;
typedef vector<pll> vll;
ld EPS = 1e-12;

vii v;
int n, tmp, tvs;
bool flag = true;

int main()
{
  s(n);
  rep(i, 0, n) {
    s(tmp); v.pb({tmp, -1}); // start event
    s(tmp); v.pb({tmp, 1});  // end event
  }
  sort(all(v));
  rep(i, 0, n*2) {
    tvs -= v[i].nd;
    if (tvs > 2) {
      flag = false;
      break;
    }
  }
  printf(flag ? "YES\n" : "NO\n");

  return 0;
}
