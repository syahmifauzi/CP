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

ll cost;
int n, k, arr[300003], ans[300003];
priority_queue<pii> pq;

int main()
{
  s(n); s(k);
  int time = k + 1;
  rep(i, 1, n+1) s(arr[i]);
  rep(i, 1, k+1) pq.push({arr[i], i});
  rep(i, k+1, n+1) {
    pq.push({arr[i], i});
    auto curr = pq.top();
    pq.pop();
    cost += curr.st * 1LL * (time - curr.nd);
    ans[curr.nd] = time++;
  }
  while (!pq.empty()) {
    auto curr = pq.top();
    pq.pop();
    cost += curr.st * 1LL * (time - curr.nd);
    ans[curr.nd] = time++;
  }
  cout << cost << endl;
  rep(i, 1, n+1) printf("%d%c", ans[i], " \n"[i==n]);

  return 0;
}
