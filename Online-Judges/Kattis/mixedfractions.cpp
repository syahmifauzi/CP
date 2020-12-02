#include <bits/stdc++.h> 
#define rep(i, a, n) for (int i = a; i <= n; ++i) 
#define dbg(x) cout << (#x) << " is " << x << endl
using namespace std; 

int a, b, res; 

int main() 
{ 
  while (scanf("%d%d", &a, &b) == 2) {
    if (a == 0 && b == 0) return 0;
    printf("%d %d / %d\n", a / b, a % b, b);
  }

  return 0;
}
