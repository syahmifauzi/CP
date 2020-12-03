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

int n, res = 0;
bool vis[2020];
vector<int> adjList[2020];

void dfs(int u, int cnt) {
  // printf("Currently at node %d with cnt = %d\n", u, cnt);
  vis[u] = true;
  res = max(res, cnt);
  for (auto v: adjList[u])
    if (!vis[v])
      dfs(v, cnt + 1);
}

int main()
{
  s(n);
  rep(i, 1, n+1) {
    int x; s(x);
    if (x != -1) adjList[x].pb(i);
  }
  rep(i, 1, n+1) {
    memset(vis, 0, sizeof vis);
    dfs(i, 1);
  }
  p(res); pnl();

  return 0;
}
