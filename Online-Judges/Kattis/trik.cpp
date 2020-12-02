#include <bits/stdc++.h> 
#define rep(i, a, n) for (int i = a; i < n; ++i) 
#define dbg(x) cout << (#x) << " is " << x << endl
using namespace std; 

string s;
int res = 1;

int main() 
{ 
  cin >> s;
  rep(i, 0, s.length()) {
    if (s[i] == 'A' && res != 3)
      res = res == 1 ? 2 : 1;
    else if (s[i] == 'B' && res != 1)
      res = res == 2 ? 3 : 2;
    else if (s[i] == 'C' && res != 2)
      res = res == 1 ? 3 : 1;      
  }
  printf("%d\n", res);

  return 0;
}
