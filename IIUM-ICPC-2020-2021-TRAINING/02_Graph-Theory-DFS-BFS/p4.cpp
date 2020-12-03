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

int n, m, cats[100010], res;
bool vis[100010];
vector<int> adjList[100010];

void dfs(int u, int totCats) {
  // cout << "Currently at node " << u << " with totCats = " << totCats << endl;
  vis[u] = 1;
  if (totCats > m) return;
  if (adjList[u].size() == 1 && u != 1) ++res;
  for (auto v: adjList[u]) {
    if (vis[v] == 0)
      dfs(v, (totCats + cats[v]) * cats[v]);
  }
}

int main()
{
  memset(vis, 0, sizeof vis);
  s(n); s(m);
  rep(i, 1, n+1) s(cats[i]);
  rep(i, 0, n-1) {
    int u, v;
    s(u), s(v);
    adjList[u].pb(v);
    adjList[v].pb(u);
  }
  dfs(1, cats[1]);
  p(res); pnl();

  return 0;
}
