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
using namespace std;

typedef long long ll;
typedef pair<ll ,ll> pll;
typedef pair<int, int> pii;

string s, ss;

int main()
{
  cin >> s;

  int idx = s.size();
  repr(i, s.size()-1, 0) {
    if (s[i] != '0') break;
    --idx;
  }

  s = ss = s.substr(0, idx);
  reverse(all(ss));

  printf(s.compare(ss) == 0 ? "YES\n" : "NO\n");

  return 0;
}
