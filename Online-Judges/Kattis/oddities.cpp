#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, x;

  scanf("%d", &n);

  for (int i = 0; i < n; ++i) {
    scanf("%d", &x);
    if (x % 2)
      printf("%d is odd\n", x);
    else
      printf("%d is even\n", x);
  }

  return 0;
}
