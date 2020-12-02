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
#define p(n) printf("%d", n)
#define pws() printf(" ")
#define pnl() printf("\n")
#define fill(a, x) rep(i, 0, sz(a)) a[i] = x;
using namespace std;

typedef long long ll;
typedef pair<ll ,ll> pll;
typedef pair<int, int> pii;

string s;
int res = 6;

void findDiff(int a, int b, int c, int d, int e, int f) {
  int arr[] = {a, b, c, d, e, f}, diff = 0;
  rep(i, 0, 6) diff += s[i]-'0' != arr[i];
  res = min(res, diff);
}

int main()
{
  cin >> s;
  rep(i, 0, 10)
    rep(j, 0, 10)
      rep(k, 0, 10)
        rep(l, 0, 10)
          rep(m, 0, 10)
            rep(n, 0, 10)
              if (i + j + k == l + m + n)
                findDiff(i, j, k, l, m, n);
  p(res);
  pnl();

  return 0;
}
