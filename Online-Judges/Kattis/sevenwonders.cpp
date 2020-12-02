#include <bits/stdc++.h>
#define rep(i, a, n) for (int i = a; i < n; ++i)
using namespace std;

string s;
int a[3], res;

int main()
{
  cin >> s;

  rep(i, 0, s.length()) {
    if (s[i] == 'T') a[0]++;
    else if (s[i] == 'C') a[1]++;
    else if (s[i] == 'G') a[2]++;
  }

  rep(i, 0, 3) res += pow(a[i], 2);

  while (a[0]-- && a[1]-- && a[2]--)
    res += 7;
  
  printf("%d\n", res);

  return 0;
}
