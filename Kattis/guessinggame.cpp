#include <bits/stdc++.h>
#define rep(i, a, n) for (int i = a; i < n; ++i)
#define dbg(x) cout << (#x) << " is " << x << "\n"
using namespace std;

int n, l = 0, r = 11;
string s;

int main()
{
  while (scanf("%d", &n) == 1 && n) {
    cin.ignore();
    getline(cin, s);
    if (s == "too high")
      r = min(r, n);
    else if (s == "too low")
      l = max(l, n);
    else {
      printf(n > l && n < r ? "Stan may be honest\n" : "Stan is dishonest\n");
      l = 0;
      r = 11;
    }
  }

  return 0;
}
