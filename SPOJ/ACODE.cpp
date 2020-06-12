#include <bits/stdc++.h>
#define rep(i, a, n) for (int i = a; i < n; ++i)
#define dbg(x) cout << (#x) << " is " << x << "\n"
using namespace std;

string s, abc = "0ABCDEFGHIJKLMNOPQRSTUVWXYZ";
map<string, bool> mp;

char getAbc(int i) {
  return abc[s[i]-'0'];
}

int sums(int i, int j) {
  return (s[i]-'0')*10 + (s[j]-'0');
}

void solve(string ss, int idx, bool prevTaken) {
  if (idx > s.size()) {
    dbg(ss);
    mp[ss] = 1;
    return;
  }
  if (prevTaken) {
    if (s[idx] != 0)
      solve(ss + getAbc(idx), idx + 1, 1);
    if (idx != s.size()-1 && sums(idx, idx+1) <= 26)
      solve(ss, idx + 1, 0);
  } else {
    solve(ss + abc[sums(idx-1, idx)], idx + 1, 1);
  }
}

int main()
{
  while (cin >> s && s != "0") {
    mp.clear();
    solve("", 0, 1);
    dbg(mp.size());
  }

  return 0;
}
