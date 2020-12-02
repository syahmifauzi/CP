#include <bits/stdc++.h>
#define rep(i, a, n) for (int i = a; i < n; ++i)
#define dbg(x) cout << (#x) << " is " << x << "\n"
using namespace std;

int n, s[100005], c[100005], res;

int main()
{
  scanf("%d", &n);
  rep(i, 0, n) {
    scanf("%d", &s[i]);
    c[i] = 1;
  }
  rep(i, 0, n-1)
    if (s[i] > s[i+1])
      ++c[i];
  rep(i, 1, n)
    if (s[i] > s[i-1])
      c[i] = min(c[i], c[i-1]) + 1;
  rep(i, 0, n)
    res += c[i];
  rep(i, 0, n)
    printf("%d ", c[i]);
  printf("\n%d\n", res);

  return 0;
}
