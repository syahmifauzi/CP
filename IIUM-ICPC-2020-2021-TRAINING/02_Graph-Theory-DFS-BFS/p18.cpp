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

const int INF = 0x3f3f3f3f;
typedef long long ll;
typedef long double ld;
typedef pair<ll ,ll> pll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pii> vii;
typedef vector<ll> vl;
typedef vector<pll> vll;
ld EPS = 1e-12;

int n, m, sp[20020];
queue<int> que;

void bfs(int u) {
  sp[u] = 0;
  que.push(u);
  while (!que.empty()) {
    u = que.front();
    que.pop();
    if (u * 2 < 20020 && sp[u*2] == INF) {
      sp[u*2] = sp[u] + 1;
      que.push(u * 2);
    }
    if (u - 1 > 0 && sp[u-1] == INF) {
      sp[u-1] = sp[u] + 1;
      que.push(u - 1);
    }
  }
}

int main()
{
  memset(sp, 0x3f, sizeof sp);
  cin >> n >> m;
  bfs(n);
  p(sp[m]); pnl();

  return 0;
}
