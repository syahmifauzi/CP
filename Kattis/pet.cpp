#include <bits/stdc++.h>
#define rep(i, a, n) for (int i = a; i < n; ++i)
#define dbg(x) cout << (#x) << " is " << x << endl 
using namespace std;

int x, arr[5];

int main()
{
  rep(i, 0, 5) rep(j, 0, 4) {
    scanf("%d", &x);
    arr[i] += x;
  }
  int idx = 0,
      val = arr[0];
  rep(i, 1, 5) if (arr[i] > val) {
    val = arr[i];
    idx = i;
  }
  printf("%d %d\n", idx + 1, val);

  return 0;
}
