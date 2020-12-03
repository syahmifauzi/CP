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

string s, res = "undefined";
int n;

string opp[] = {"^v", "v^", "<>", "><"};
string cw[] = {"^>", ">v", "v<", "<^"};

bool isOpp(char c1, char c2) {
  rep(i, 0, 4)
    if (c1 == opp[i][0] && c2 == opp[i][1])
      return true;
  return false;
}

string getDir(char c1, char c2) {
  rep(i, 0, 4)
    if (c1 == cw[i][0] && c2 == cw[i][1])
      return n == 1 ? "cw" : "ccw";
  return n == 1 ? "ccw" : "cw";
}

int main()
{
  getline(cin, s);
  s(n);

  if (!isOpp(s[0], s[2]) && s[0] != s[2]) {
    n %= 4;
    res = getDir(s[0], s[2]);
  }

  puts(res.c_str());

  return 0;
}
