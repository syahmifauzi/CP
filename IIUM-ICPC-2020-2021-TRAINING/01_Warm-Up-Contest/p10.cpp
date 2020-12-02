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
int res;

string addMin(string str, int x) {
  int hrs = stoi(str.substr(0, 2));
  int mins = stoi(str.substr(3, 5)) + x;
  if (mins > 59) {
    mins = 0;
    hrs = hrs + 1 > 23 ? 0 : hrs + 1;
  }
  string sHrs = to_string(hrs);
  string sMins = to_string(mins);
  sHrs = sHrs.size() == 1 ? "0" + sHrs : sHrs;
  sMins = sMins.size() == 1 ? "0" + sMins : sMins;
  return sHrs + ":" + sMins;
}

bool isPalindrome(string str) {
  string str2 = str;
  reverse(all(str));
  return str.compare(str2) == 0;
}

int main()
{
  cin >> s;
  while (!isPalindrome(s)) {
    ++res;
    s = addMin(s, 1);
  }
  p(res); pnl();

  return 0;
}
