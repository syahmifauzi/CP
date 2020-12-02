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
typedef pair<ll ,ll> pll;
typedef pair<int, int> pii;

ll n, k, resMin, resMax;

int main()
{
  sll(n); sll(k);
  resMin = k == 0 || k == n ? 0 : 1;
  resMax = min(n - k, 2 * k);
  printf("%lld %lld\n", resMin, resMax);

  return 0;
}
