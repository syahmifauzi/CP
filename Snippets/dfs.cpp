#include <bits/stdc++.h>
#define rep(i, a, n) for (int i = a; i < n; ++i)
#define sz(a) (sizeof(a) / sizeof(a[0]))
using namespace std;

int n;
bool vis[100];
vector<int> adjList[100];

void dfs(int u) {
  printf("Currently at node %d\n", u);
  vis[u] = true;
  for (auto v: adjList[u]) {
    if (vis[v] == 0)
      dfs(v);
  }
}

int main()
{
  memset(vis, 0, sizeof vis);
  cin >> n;
  rep(i, 0, n-1) {
    int u, v;
    cin >> u >> v;
    adjList[u].push_back(v);
    adjList[v].push_back(u);
  }
  dfs(1);

  return 0;
}

// 7
// 1 2
// 1 3
// 2 4
// 2 5
// 3 6
// 3 7
