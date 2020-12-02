#include <bits/stdc++.h>
#define rep(i, a, n) for (int i = a; i < n; ++i)
#define dbg(x) cout << (#x) << " is " << x << endl 
using namespace std;

string s, ss = "";

int main()
{
  cin >> s;
  ss += s[0];
  rep(i, 1, s.length())
    if (s[i] == '-')
      ss += s[i+1];
  cout << ss << endl;

  return 0;
}
