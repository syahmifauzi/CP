#include <bits/stdc++.h>
#define rep(i, a, n) for (int i = a; i < n; ++i)
#define dbg(x) cout << (#x) << " is " << x << endl 
using namespace std;

int x, n, p;

int main()
{
  scanf("%d%d", &x, &n);

  int res = 0;

  rep(i, 0, n) {
    scanf("%d", &p);
    res += x - p;
  }
  
  printf("%d\n", res + x);

  return 0;
}
