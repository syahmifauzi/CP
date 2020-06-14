// implementation *1000
#include <bits/stdc++.h>
#define rep(i, a, n) for (int i = a; i < n; ++i)
#define dbg(x) cout << (#x) << " is " << x << "\n"
using namespace std;

string s;
int cnt = 0;

int main()
{
  cin >> s;
  rep(i, 0, s.size()) {
    if (s[i] == '1') {
      rep(j, i+1, s.size())
        if (s[j] == '0')
          ++cnt;
      break;
    }
  }
  printf(cnt >= 6 ? "yes\n" : "no\n");

  return 0;
}
