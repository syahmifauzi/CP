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

typedef pair<int, int> ii;

int n, q, t1, t2;
vector<int> v;
vector<ii> vp;
int res1, res2, res3;

bool cmp(ii lhs, ii rhs) {
  if (lhs.st != rhs.st)
    return lhs.st < rhs.st;
  return lhs.nd < rhs.nd;
}

void search(int x) {
  int l = 0, r = n - 1, mid;
  while (l <= r) {
    mid = (l + r) / 2;
    if (vp[mid].st <= x)
      l = mid + 1;
    else
      r = mid - 1;
  }
  res1 = r < 0 ? -1 : vp[r].nd;
  res2 = r < 0 ? -1 : vp[r].st;
  res3 = r + 1 >= n ? -1 : vp[r+1].st;
  printf("%d %d %d\n", res1, res2, res3);
}

int main()
{
  s(n); s(q);
  rep(i, 0, n) {
    s(t1); s(t2);
    vp.pb(mp(t1, t2));
  }
  sort(all(vp), cmp);
  rep(i, 0, q) {
    s(t1);
    v.pb(t1);
  }

  rep(i, 0, q)
    search(v[i]);

  return 0;
}

// 5 6
// 1 4
// 6 10
// 8 0
// 9 9999
// 60 2
// 6
// 7
// 8
// 45
// 80
// 0
