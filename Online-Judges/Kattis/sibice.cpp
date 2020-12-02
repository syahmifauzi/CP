#include <bits/stdc++.h>
#define rep(i, a, n) for (int i = a; i < n; ++i)
#define dbg(x) cout << (#x) << " is " << x << endl 
using namespace std;

int n, w, h, x;

int main()
{
  scanf("%d%d%d", &n, &w, &h);
  rep(i, 0, n) {
    scanf("%d", &x);
    if (x <= w && x <= h || x <= (int)sqrt(w*w + h*h))
      printf("DA\n");
    else
      printf("NE\n");
  }

  return 0;
}
