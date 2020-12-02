#include <bits/stdc++.h>
#define rep(i, a, n) for (int i = a; i < n; ++i)
#define dbg(x) cout << (#x) << " is " << x << endl 
using namespace std;

int x, y, q;

int main()
{
  scanf("%d%d", &x, &y);

  if (x > 0 && y > 0) q = 1;
  else if (x < 0 && y > 0) q = 2;
  else if (x < 0 && y < 0) q = 3;
  else q = 4;
  
  printf("%d\n", q);

  return 0;
}
