#include <bits/stdc++.h> 
#define rep(i, a, n) for (int i = a; i < n; ++i) 
#define dbg(x) cout << (#x) << " is " << x << endl
using namespace std; 

int n, nn, sum;

int main() 
{ 
  scanf("%d", &n);
  while (n) {
    nn = n;
    sum = 0;
    while (nn) {
      sum += nn % 10;
      nn /= 10;
    }
    if (n % sum == 0) {
      printf("%d\n", n);
      break;
    }
    n++;
  }

  return 0;
}
