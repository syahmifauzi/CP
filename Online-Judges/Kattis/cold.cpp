#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, x, cnt = 0;

  scanf("%d", &n);

  for (int i = 0; i < n; ++i) {
    scanf("%d", &x);
    cnt += x < 0;
  }

  printf("%d\n", cnt);

  return 0;
}
