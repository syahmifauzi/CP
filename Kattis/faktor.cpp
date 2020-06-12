#include <bits/stdc++.h>
#define rep(i, a, n) for (int i = a; i < n; ++i)
#define dbg(x) cout << (#x) << " is " << x << endl 
using namespace std;

int a, i;

int main()
{
  scanf("%d%d", &a, &i);
  printf("%d\n", --i * a + 1);

  return 0;
}
