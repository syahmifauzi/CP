#include <bits/stdc++.h>
#define rep(i, a, n) for (int i = a; i < n; ++i)
#define dbg(x) cout << (#x) << " is " << x << endl 
using namespace std;

double c, l, w, h, res;

int main()
{
  scanf("%lf%lf", &c, &l);
  rep(i, 0, l) {
    scanf("%lf%lf", &w, &h);
    res += w * h;
  }
  printf("%.7lf\n", res * c);
  
  return 0;
}
