// NO IMPROVEMENT LOL
#include <bits/stdc++.h>
#define rep(i, a, n) for (int i = a; i < n; ++i)
#define dbg(x) cerr << ">>> " << #x << " = " << x << "\n";
#define pb push_back
#define mp make_pair
#define st first
#define nd second
using namespace std;
typedef long long ll;

const int MAX_SIZE = 200020;
int n, m, a, b, vertices[MAX_SIZE];
bool visited[MAX_SIZE];
vector<int> v1, v2;

struct Node {
  int idx;
  list<int> adj;
} nodes[MAX_SIZE];

void traverse(Node node) {
  visited[node.idx] = true;
  v2.pb(node.idx);

  for (auto nod : node.adj)
    visited[nod] = true;

  rep(i, 1, n+1)
    if (!visited[i])
      rep(j, 1, n+1)
        if (nodes[j].idx == i)
          traverse(nodes[j]);
}

void start() {
  rep(i, 1, n+1) {
    rep(j, 1, n+1) visited[j] = false;
    v2.clear();
    traverse(nodes[i]);
    if (v2.size() > v1.size()) {
      v1.clear();
      v1.reserve(v2.size());
      copy(v2.begin(), v2.end(), back_inserter(v1));
      rep(i, 1, n+1) visited[i] = false;
      rep(i, 0, v1.size()) visited[v1[i]] = true;
      printf("%d\n", (int)v1.size());
      rep(i, 1, n+1) printf("%d ", visited[i]);
      puts("");
    }
  }
}

bool cmp(Node lhs, Node rhs) {
  return lhs.adj.size() < rhs.adj.size();
}

int main()
{
  scanf("%d%d", &n, &m);
  rep(i, 0, MAX_SIZE) nodes[i].idx = i;
  rep(i, 0, m) {
    scanf("%d%d", &a, &b);
    nodes[a].adj.pb(b);
    nodes[b].adj.pb(a);
  }
  sort(nodes+1, nodes+n+1, cmp);
  start();
  printf("Finally: %d\n", (int)v1.size());
  rep(i, 1, n+1) visited[i] = false;
  rep(i, 0, v1.size()) visited[v1[i]] = true;
  rep(i, 1, n+1) printf("%d ", visited[i]);
  puts("");

  return 0;
}

// 5 5
// 1 2
// 1 3
// 1 4
// 1 5
// 3 4

// 5 5
// 1 2
// 3 1
// 1 4
// 5 1
// 1 6
