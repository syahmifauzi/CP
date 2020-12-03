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
#define pc(n) printf("%c", n)
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

int n, m, k, totEmpty, cnt;
char maze[505][505];
bool vis[505][505];
int dx[] = {0, 0, -1, 1};
int dy[] = {1, -1, 0, 0};
queue<pair<char, char>> que;

void dfs(int row, int col) {
  // printf("Currently at (%d, %d)\n", row, col);
  ++cnt;
  vis[row][col] = true;
  if (cnt > totEmpty - k) maze[row][col] = 'X';
  rep(i, 0, 4) {
    int x = row + dx[i];
    int y = col + dy[i];
    if (x < 0 || x >= n) continue;
    if (y < 0 || y >= m) continue;
    if (maze[x][y] == '#') continue;
    if (vis[x][y]) continue;
    dfs(x, y);
  }
}

// wrong answer
void bfs(int row, int col) {
  que.push({row, col});
  while (!que.empty()) {
    row = que.front().st;
    col = que.front().nd;
    que.pop();
    // printf("Currently at (%d, %d)\n", row, col);
    ++cnt;
    vis[row][col] = true;
    if (cnt > totEmpty - k) maze[row][col] = 'X';
    rep(i, 0, 4) {
      int x = row + dx[i];
      int y = col + dy[i];
      if (x < 0 || x >= n) continue;
      if (y < 0 || y >= m) continue;
      if (maze[x][y] == '#') continue;
      if (vis[x][y]) continue;
      que.push({x, y});
    }
  }
}

int main()
{
  int x, y;
  cin >> n >> m >> k;
  rep(i, 0, n) rep(j, 0, m) vis[i][j] = false;
  rep(i, 0, n) rep(j, 0, m) {
    sc(maze[i][j]);
    if (maze[i][j] == '.') {
      ++totEmpty;
      x = i, y = j;
    }
  }
  dfs(x, y);
  // bfs(x, y);
  rep(i, 0, n) {
    rep(j, 0, m)
      pc(maze[i][j]);
    pnl();
  }

  return 0;
}
