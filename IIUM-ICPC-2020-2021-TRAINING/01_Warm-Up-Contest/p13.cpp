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
#define fill(a, x) rep(i, 0, sz(a)) a[i] = x;
using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<ll ,ll> pll;
typedef pair<int, int> pii;
ld EPS = 1e-10;

ll ax, ay, bx, by, cx, cy;
ld m1, m2, m3, d1, d2;

ld distance(ll x1, ll y1, ll x2, ll y2) {
  return sqrt(pow(x1 - x2, 2.0) + pow(y1 - y2, 2.0));
}

ld slope(ll x1, ll y1, ll x2, ll y2) {
  return (1.0 * y1 - y2) / (1.0 * x1 - x2);
}

bool cmp(ld x, ld y) {
  return abs(x - y) < EPS;
}

int main()
{
  cin >> ax >> ay >> bx >> by >> cx >> cy;

  m1 = slope(ax, ay, bx, by);
  m2 = slope(ax, ay, cx, cy);
  m3 = slope(bx, by, cx, cy);

  d1 = distance(ax, ay, bx, by);
  d2 = distance(bx, by, cx, cy);

  if (cmp(m1, m2) && cmp(m1, m3) && cmp(m2, m3) || !cmp(d1, d2) || isinf(m1) && isinf(m2) && isinf(m3)) {
    printf("No\n");
  } else {
    printf("Yes\n");
  }

  return 0;
}
