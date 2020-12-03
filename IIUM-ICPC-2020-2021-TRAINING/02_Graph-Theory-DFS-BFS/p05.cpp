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

int n, m, res;
bool lang[111][111], vis[111], needExtraLang = true;
vector<int> adjList[111];

void dfs(int u) {
  // printf("Currently at node %d\n", u);
  vis[u] = true;
  for (auto v: adjList[u])
    if (!vis[v])
      dfs(v);
}

int main()
{
  memset(vis, 0, sizeof vis);
  memset(lang, 0, sizeof lang);
  cin >> n >> m;
  rep(i, 1, n+1) {
    int k, x;
    s(k);
    if (k) needExtraLang = false;
    rep(j, 0, k) {
      s(x);
      lang[i][x] = true;
    }
  }
  rep(u, 1, n+1)
    rep(v, 1, n+1)
      rep(k, 1, m+1)
        if (lang[u][k] && lang[v][k] && u != v)
          adjList[u].pb(v);
  rep(u, 1, n+1)
    if (!vis[u] && ++res)
      dfs(u);
  p(res-1+needExtraLang); pnl();

  return 0;
}
