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
#define sc(n) scanf(" %c", &n)
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

int n, m;
char dots[55][55];
bool vis[55][55], res = false;
int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};

void dfs(int row, int col, int startRow, int startCol, int cnt) {
  // printf("Currently at (%d, %d)\n", row, col);
  vis[row][col] = true;
  rep(i, 0, 4) {
    int x = dx[i] + row;
    int y = dy[i] + col;
    if (x < 0 || x >= n) continue;
    if (y < 0 || y >= m) continue;
    if (dots[x][y] != dots[row][col]) continue;
    if (x == startRow && y == startCol && cnt >= 4) res = true;
    if (vis[x][y]) continue;
    dfs(x, y, startRow, startCol, cnt + 1);
  }
}

int main()
{
  cin >> n >> m;
  rep(i, 0, n)
    rep(j, 0, m)
      sc(dots[i][j]);
  rep(i, 0, n) {
    rep(j, 0, m) {
      memset(vis, 0, sizeof vis);
      dfs(i, j, i, j, 1);
    }
  }
  printf(res ? "Yes\n": "No\n");

  return 0;
}
