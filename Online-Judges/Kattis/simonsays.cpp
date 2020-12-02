#include <bits/stdc++.h> 
#define rep(i, a, n) for (int i = a; i < n; ++i) 
#define dbg(x) cout << (#x) << " is " << x << endl
using namespace std; 

int n;
string s, ss = "Simon says ";

int main() 
{ 
  scanf("%d", &n);
  cin.ignore();
  while (n--) {
    getline(cin, s);
    if (s.find(ss) != -1)
      cout << s.substr(ss.length()) << endl;
  }

  return 0;
}
