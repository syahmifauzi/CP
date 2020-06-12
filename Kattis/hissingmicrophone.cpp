#include <bits/stdc++.h>
#define rep(i, a, n) for (int i = a; i < n; ++i)
#define dbg(x) cout << (#x) << " is " << x << endl 
using namespace std;

string s;

int main()
{
  cin >> s;
  printf(s.find("ss") != -1 ? "hiss\n" : "no hiss\n");

  return 0;
}
