#include <bits/stdc++.h>
#define rep(i, a, n) for (int i = a; i < n; ++i)
#define dbg(x) cout << (#x) << " is " << x << endl 
using namespace std;

int n, p, res;

int main()
{
  scanf("%d", &n);
  rep(i, 0, n) {
    scanf("%d", &p);
    res += pow(p / 10, p % 10);
  }
  printf("%d\n", res);

  return 0;
}
