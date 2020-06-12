#include <bits/stdc++.h>
#define rep(i, a, n) for (int i = a; i < n; ++i)
#define dbg(x) cout << (#x) << " is " << x << endl 
using namespace std;

int n, p;
string s;

int main()
{
  scanf("%d%d", &n, &p);
  rep(i, 0, n) {
    getline(cin, s);
    cin.ignore();
  }
  printf("%d\n", p);

  return 0;
}
