#include <bits/stdc++.h>
#define rep(i, a, n) for (int i = a; i < n; ++i)
#define dbg(x) cerr << ">>> " << #x << " = " << x << "\n";
#define pb push_back
#define mp make_pair
#define st first
#define nd second
#define min(x, y) x < y ? x : y
#define max(x, y) x > y ? x : y
using namespace std;
typedef long long ll;

string s, u;
int diff, res;

int main()
{
  cin >> s >> u;
  s = string(2020, '#') + s + string(2020, '#');
  res = u.size();
  rep(i, 0, s.size()+1-u.size()) {
    diff = 0;
    rep(j, 0, u.size())
      diff += s[i+j] != u[j];
    res = min(res, diff);
  }
  printf("%d\n", res);

  return 0;
}
