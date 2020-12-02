#include <bits/stdc++.h>
#define rep(i, a, n) for (int i = a; i < n; ++i)
#define dbg(x) cout << (#x) << " is " << x << endl 
using namespace std;

int a[6], aa[] = {1, 1, 2, 2, 2, 8};

int main()
{
  rep(i, 0, 6) scanf("%d", &a[i]);
  rep(i, 0, 6) printf("%d ", aa[i] - a[i]);
  printf("\n");

  return 0;
}
